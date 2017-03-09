#include "AutonomousUltimateRedRotateLeftSpinShooter.h"
#include "../../../../../CommandBase.h"

AutonomousUltimateRedRotateLeftSpinShooter::AutonomousUltimateRedRotateLeftSpinShooter() {
	Requires(CommandBase::shooter.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedRotateLeftSpinShooter::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedRotateLeftSpinShooter::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedRotateLeftSpinShooter::IsFinished() {
	return timer->Get() >= 0.5;
}

// Called once after isFinished returns true
void AutonomousUltimateRedRotateLeftSpinShooter::End() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedRotateLeftSpinShooter::Interrupted() {
	End();
}
