#include "AutonomousShootBlueDriveBackwardsHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousShootBlueDriveBackwardsHoldDoors::AutonomousShootBlueDriveBackwardsHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootBlueDriveBackwardsHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootBlueDriveBackwardsHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootBlueDriveBackwardsHoldDoors::IsFinished() {
	return CommandBase::drivebase.get()->ReturnDrivenInches(1.5) >= 60 || timer->Get() >= 2;
}

// Called once after isFinished returns true
void AutonomousShootBlueDriveBackwardsHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootBlueDriveBackwardsHoldDoors::Interrupted() {
	End();
}
