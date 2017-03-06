#include "AutonomousShootRedDriveBackwardsHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedDriveBackwardsHoldDoors::AutonomousShootRedDriveBackwardsHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedDriveBackwardsHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedDriveBackwardsHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedDriveBackwardsHoldDoors::IsFinished() {
	return timer->Get() >= 2;
}

// Called once after isFinished returns true
void AutonomousShootRedDriveBackwardsHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedDriveBackwardsHoldDoors::Interrupted() {
	End();
}
