#include "AutonomousUltimateRedStrafeLeftHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousUltimateRedStrafeLeftHoldDoors::AutonomousUltimateRedStrafeLeftHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedStrafeLeftHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedStrafeLeftHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedStrafeLeftHoldDoors::IsFinished() {
	return timer->Get() >= 0.7;
}

// Called once after isFinished returns true
void AutonomousUltimateRedStrafeLeftHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedStrafeLeftHoldDoors::Interrupted() {
	End();
}
