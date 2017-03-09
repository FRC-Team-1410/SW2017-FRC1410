#include "AutonomousUltimateRedStrafeLeftSpinShooter.h"
#include "../../../../../CommandBase.h"

AutonomousUltimateRedStrafeLeftSpinShooter::AutonomousUltimateRedStrafeLeftSpinShooter() {
	Requires(CommandBase::shooter.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedStrafeLeftSpinShooter::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedStrafeLeftSpinShooter::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedStrafeLeftSpinShooter::IsFinished() {
	return timer->Get() >= 1;
}

// Called once after isFinished returns true
void AutonomousUltimateRedStrafeLeftSpinShooter::End() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedStrafeLeftSpinShooter::Interrupted() {
	End();
}
