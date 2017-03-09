#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedDriveBackwardsCommands/AutonomousUltimateRedDriveBackwardsDriveWheels.h>
#include "../../../../../CommandBase.h"

AutonomousUltimateRedDriveBackwardsDriveWheels::AutonomousUltimateRedDriveBackwardsDriveWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedDriveBackwardsDriveWheels::Initialize() {
	timer->Start();
	CommandBase::drivebase.get()->ResetGyro();
	CommandBase::drivebase.get()->ResetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedDriveBackwardsDriveWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0.5, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedDriveBackwardsDriveWheels::IsFinished() {
	return CommandBase::drivebase.get()->ReturnDrivenInches(1.5) >= 32 || timer->Get() >= 1.2;
}

// Called once after isFinished returns true
void AutonomousUltimateRedDriveBackwardsDriveWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedDriveBackwardsDriveWheels::Interrupted() {
	End();
}
