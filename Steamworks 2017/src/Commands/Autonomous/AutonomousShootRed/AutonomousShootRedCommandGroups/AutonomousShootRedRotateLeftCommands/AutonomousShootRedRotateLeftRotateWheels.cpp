#include "AutonomousShootRedRotateLeftRotateWheels.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedRotateLeftRotateWheels::AutonomousShootRedRotateLeftRotateWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedRotateLeftRotateWheels::Initialize() {
	timer->Start();
	CommandBase::drivebase.get()->ResetGyro();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedRotateLeftRotateWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, -0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedRotateLeftRotateWheels::IsFinished() {
	return CommandBase::drivebase.get()->ReturnAngle() <= -10 || timer->Get() >= 0.5;
}

// Called once after isFinished returns true
void AutonomousShootRedRotateLeftRotateWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedRotateLeftRotateWheels::Interrupted() {
	End();
}
