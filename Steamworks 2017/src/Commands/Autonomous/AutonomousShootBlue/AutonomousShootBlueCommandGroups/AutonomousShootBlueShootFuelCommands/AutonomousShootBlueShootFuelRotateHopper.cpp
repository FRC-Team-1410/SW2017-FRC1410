#include "AutonomousShootBlueShootFuelRotateHopper.h"
#include "../../../../../CommandBase.h"

AutonomousShootBlueShootFuelRotateHopper::AutonomousShootBlueShootFuelRotateHopper() {
	Requires(CommandBase::hopper.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootBlueShootFuelRotateHopper::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootBlueShootFuelRotateHopper::Execute() {
	CommandBase::hopper.get()->SpinMotor(1.00);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootBlueShootFuelRotateHopper::IsFinished() {
	return timer->Get() >= 8.5;
}

// Called once after isFinished returns true
void AutonomousShootBlueShootFuelRotateHopper::End() {
	CommandBase::hopper.get()->SpinMotor(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootBlueShootFuelRotateHopper::Interrupted() {
	End();
}
