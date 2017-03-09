#include "AutonomousUltimateRedRotateToPegRotateWheels.h"
#include "../../../../../CommandBase.h"

AutonomousUltimateRedRotateToPegRotateWheels::AutonomousUltimateRedRotateToPegRotateWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedRotateToPegRotateWheels::Initialize() {
	timer->Start();
	CommandBase::drivebase.get()->ResetGyro();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedRotateToPegRotateWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, -0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedRotateToPegRotateWheels::IsFinished() {
	return CommandBase::drivebase.get()->ReturnAngle() <= -60 || timer->Get() >= 1.0;
}

// Called once after isFinished returns true
void AutonomousUltimateRedRotateToPegRotateWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedRotateToPegRotateWheels::Interrupted() {
	End();
}
