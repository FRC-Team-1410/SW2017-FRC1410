#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedRotateMoreCommands/AutonomousUltimateRedRotateMoreRotateWheels.h>
#include "../../../../../CommandBase.h"

AutonomousUltimateRedRotateMoreRotateWheels::AutonomousUltimateRedRotateMoreRotateWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedRotateMoreRotateWheels::Initialize() {
	timer->Start();
	CommandBase::drivebase.get()->ResetGyro();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedRotateMoreRotateWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedRotateMoreRotateWheels::IsFinished() {
	return CommandBase::drivebase.get()->ReturnAngle() >= 20 || timer->Get() >= 1;
}

// Called once after isFinished returns true
void AutonomousUltimateRedRotateMoreRotateWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedRotateMoreRotateWheels::Interrupted() {
	End();
}
