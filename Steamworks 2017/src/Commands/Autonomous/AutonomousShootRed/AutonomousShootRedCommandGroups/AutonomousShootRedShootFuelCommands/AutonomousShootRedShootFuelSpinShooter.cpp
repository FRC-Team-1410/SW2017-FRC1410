#include "AutonomousShootRedShootFuelSpinShooter.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedShootFuelSpinShooter::AutonomousShootRedShootFuelSpinShooter() {
	Requires(CommandBase::shooter.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedShootFuelSpinShooter::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedShootFuelSpinShooter::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedShootFuelSpinShooter::IsFinished() {
	return timer->Get() >= 8.5;
}

// Called once after isFinished returns true
void AutonomousShootRedShootFuelSpinShooter::End() {
	CommandBase::shooter.get()->SpinUpSpinner(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedShootFuelSpinShooter::Interrupted() {
	End();
}
