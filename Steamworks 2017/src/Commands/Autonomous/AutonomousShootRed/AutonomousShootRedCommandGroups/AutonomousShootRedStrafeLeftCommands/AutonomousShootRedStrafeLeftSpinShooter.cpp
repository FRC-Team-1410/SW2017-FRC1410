#include "AutonomousShootRedStrafeLeftSpinShooter.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedStrafeLeftSpinShooter::AutonomousShootRedStrafeLeftSpinShooter() {
	Requires(CommandBase::shooter.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedStrafeLeftSpinShooter::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedStrafeLeftSpinShooter::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(1776);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedStrafeLeftSpinShooter::IsFinished() {
	return timer->Get() >= 0.5;
}

// Called once after isFinished returns true
void AutonomousShootRedStrafeLeftSpinShooter::End() {
	CommandBase::shooter.get()->SpinUpSpinner(1776);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedStrafeLeftSpinShooter::Interrupted() {
	End();
}
