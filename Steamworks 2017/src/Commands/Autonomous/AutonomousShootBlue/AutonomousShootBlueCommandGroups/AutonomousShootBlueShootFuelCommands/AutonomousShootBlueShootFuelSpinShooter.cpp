#include "AutonomousShootBlueShootFuelSpinShooter.h"
#include "../../../../../CommandBase.h"
#include "../../../../../RobotMap.h"

AutonomousShootBlueShootFuelSpinShooter::AutonomousShootBlueShootFuelSpinShooter() {
	Requires(CommandBase::shooter.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootBlueShootFuelSpinShooter::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootBlueShootFuelSpinShooter::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(shooter_set_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootBlueShootFuelSpinShooter::IsFinished() {
	return timer->Get() >= 6.5;
}

// Called once after isFinished returns true
void AutonomousShootBlueShootFuelSpinShooter::End() {
	CommandBase::shooter.get()->SpinUpSpinner(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootBlueShootFuelSpinShooter::Interrupted() {
	End();
}
