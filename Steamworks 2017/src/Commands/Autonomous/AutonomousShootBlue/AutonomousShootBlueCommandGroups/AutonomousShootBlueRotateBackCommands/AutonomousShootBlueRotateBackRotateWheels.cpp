#include "AutonomousShootBlueRotateBackRotateWheels.h"
#include "../../../../../CommandBase.h"

AutonomousShootBlueRotateBackRotateWheels::AutonomousShootBlueRotateBackRotateWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootBlueRotateBackRotateWheels::Initialize() {
	timer->Start();
	CommandBase::drivebase.get()->ResetGyro();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootBlueRotateBackRotateWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootBlueRotateBackRotateWheels::IsFinished() {
	return CommandBase::drivebase.get()->ReturnAngle() >= 20 || timer->Get() >= 1;
}

// Called once after isFinished returns true
void AutonomousShootBlueRotateBackRotateWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootBlueRotateBackRotateWheels::Interrupted() {
	End();
}
