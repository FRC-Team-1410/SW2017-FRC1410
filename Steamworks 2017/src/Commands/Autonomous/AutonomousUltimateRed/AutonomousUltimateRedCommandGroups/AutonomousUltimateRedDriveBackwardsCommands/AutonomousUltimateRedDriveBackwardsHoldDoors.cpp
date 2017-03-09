#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedDriveBackwardsCommands/AutonomousUltimateRedDriveBackwardsHoldDoors.h>
#include "../../../../../CommandBase.h"

AutonomousUltimateRedDriveBackwardsHoldDoors::AutonomousUltimateRedDriveBackwardsHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedDriveBackwardsHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedDriveBackwardsHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedDriveBackwardsHoldDoors::IsFinished() {
	return CommandBase::drivebase.get()->ReturnDrivenInches(1.5) >= 32 || timer->Get() >= 1.2;
}

// Called once after isFinished returns true
void AutonomousUltimateRedDriveBackwardsHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedDriveBackwardsHoldDoors::Interrupted() {
	End();
}
