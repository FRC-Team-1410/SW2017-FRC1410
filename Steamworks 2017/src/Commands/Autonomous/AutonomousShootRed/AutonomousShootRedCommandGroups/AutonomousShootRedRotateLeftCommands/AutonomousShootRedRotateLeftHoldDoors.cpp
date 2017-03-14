#include "AutonomousShootRedRotateLeftHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedRotateLeftHoldDoors::AutonomousShootRedRotateLeftHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedRotateLeftHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedRotateLeftHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedRotateLeftHoldDoors::IsFinished() {
	return CommandBase::drivebase.get()->ReturnAngle() >= 5 || timer->Get() >= 0.5;
}

// Called once after isFinished returns true
void AutonomousShootRedRotateLeftHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedRotateLeftHoldDoors::Interrupted() {
	End();
}
