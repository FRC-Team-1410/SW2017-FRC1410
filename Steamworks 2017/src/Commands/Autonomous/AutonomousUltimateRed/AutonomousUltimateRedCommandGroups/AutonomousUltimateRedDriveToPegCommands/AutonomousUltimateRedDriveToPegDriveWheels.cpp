#include "AutonomousUltimateRedDriveToPegDriveWheels.h"
#include "../../../../../CommandBase.h"

AutonomousUltimateRedDriveToPegDriveWheels::AutonomousUltimateRedDriveToPegDriveWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedDriveToPegDriveWheels::Initialize() {
	timer->Start();
	CommandBase::drivebase.get()->ResetGyro();
	CommandBase::drivebase.get()->ResetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedDriveToPegDriveWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0.5, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedDriveToPegDriveWheels::IsFinished() {
	return CommandBase::drivebase.get()->ReturnDrivenInches(1.5) >= 93 || timer->Get() >= 3.5;
}

// Called once after isFinished returns true
void AutonomousUltimateRedDriveToPegDriveWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedDriveToPegDriveWheels::Interrupted() {
	End();
}
