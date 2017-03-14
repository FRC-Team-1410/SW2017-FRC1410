#include "AutonomousShootRedRotateLeftSpinShooter.h"
#include "../../../../../CommandBase.h"
#include "../../../../../RobotMap.h"

AutonomousShootRedRotateLeftSpinShooter::AutonomousShootRedRotateLeftSpinShooter() {
	Requires(CommandBase::shooter.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedRotateLeftSpinShooter::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedRotateLeftSpinShooter::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(shooter_set_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedRotateLeftSpinShooter::IsFinished() {
	return CommandBase::drivebase.get()->ReturnAngle() >= 5 || timer->Get() >= 0.5;
}

// Called once after isFinished returns true
void AutonomousShootRedRotateLeftSpinShooter::End() {
	CommandBase::shooter.get()->SpinUpSpinner(shooter_set_speed);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedRotateLeftSpinShooter::Interrupted() {
	End();
}
