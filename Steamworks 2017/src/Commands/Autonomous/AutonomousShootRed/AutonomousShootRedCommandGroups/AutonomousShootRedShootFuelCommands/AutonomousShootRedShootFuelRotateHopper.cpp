#include "AutonomousShootRedShootFuelRotateHopper.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedShootFuelRotateHopper::AutonomousShootRedShootFuelRotateHopper() {
	Requires(CommandBase::hopper.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedShootFuelRotateHopper::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedShootFuelRotateHopper::Execute() {
	CommandBase::hopper.get()->SpinMotor(1.00);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedShootFuelRotateHopper::IsFinished() {
	return timer->Get() >= 8;
}

// Called once after isFinished returns true
void AutonomousShootRedShootFuelRotateHopper::End() {
	CommandBase::hopper.get()->SpinMotor(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedShootFuelRotateHopper::Interrupted() {
	End();
}
