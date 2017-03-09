#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedShootFuelCommands/AutonomousUltimateRedShootFuelRotateHopper.h>
#include "../../../../../CommandBase.h"

AutonomousUltimateRedShootFuelRotateHopper::AutonomousUltimateRedShootFuelRotateHopper() {
	Requires(CommandBase::hopper.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedShootFuelRotateHopper::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedShootFuelRotateHopper::Execute() {
	CommandBase::hopper.get()->SpinMotor(1.00);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedShootFuelRotateHopper::IsFinished() {
	return timer->Get() >= 6.0;
}

// Called once after isFinished returns true
void AutonomousUltimateRedShootFuelRotateHopper::End() {
	CommandBase::hopper.get()->SpinMotor(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedShootFuelRotateHopper::Interrupted() {
	End();
}
