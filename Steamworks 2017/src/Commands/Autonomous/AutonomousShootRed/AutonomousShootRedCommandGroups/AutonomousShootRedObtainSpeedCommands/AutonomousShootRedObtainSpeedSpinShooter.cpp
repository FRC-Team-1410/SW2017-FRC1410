#include "AutonomousShootRedObtainSpeedSpinShooter.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedObtainSpeedSpinShooter::AutonomousShootRedObtainSpeedSpinShooter() {
	Requires(CommandBase::shooter.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedObtainSpeedSpinShooter::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedObtainSpeedSpinShooter::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedObtainSpeedSpinShooter::IsFinished() {
	return CommandBase::shooter.get()->ReturnShooterSpeed() >= 21500 || timer->Get() >= 2;
}

// Called once after isFinished returns true
void AutonomousShootRedObtainSpeedSpinShooter::End() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedObtainSpeedSpinShooter::Interrupted() {
	End();
}
