#include "AutonomousUltimateRedRotateLeftHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousUltimateRedRotateLeftHoldDoors::AutonomousUltimateRedRotateLeftHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedRotateLeftHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedRotateLeftHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedRotateLeftHoldDoors::IsFinished() {
	return timer->Get() >= 0.2 || CommandBase::drivebase.get()->ReturnAngle() <= -10;
}

// Called once after isFinished returns true
void AutonomousUltimateRedRotateLeftHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedRotateLeftHoldDoors::Interrupted() {
	End();
}
