#include "AutonomousShootRedStrafeLeftHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedStrafeLeftHoldDoors::AutonomousShootRedStrafeLeftHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedStrafeLeftHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedStrafeLeftHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedStrafeLeftHoldDoors::IsFinished() {
	return timer->Get() >= 0.5;
}

// Called once after isFinished returns true
void AutonomousShootRedStrafeLeftHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedStrafeLeftHoldDoors::Interrupted() {
	End();
}
