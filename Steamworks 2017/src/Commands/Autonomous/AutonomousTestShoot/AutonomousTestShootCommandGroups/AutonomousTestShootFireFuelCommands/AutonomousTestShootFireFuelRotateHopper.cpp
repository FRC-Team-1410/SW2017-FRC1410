#include "AutonomousTestShootFireFuelRotateHopper.h"
#include "../../../../../CommandBase.h"

AutonomousTestShootFireFuelRotateHopper::AutonomousTestShootFireFuelRotateHopper() {
	Requires(CommandBase::hopper.get());
}

// Called just before this Command runs the first time
void AutonomousTestShootFireFuelRotateHopper::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutonomousTestShootFireFuelRotateHopper::Execute() {
	CommandBase::hopper.get()->SpinMotor(1.00);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousTestShootFireFuelRotateHopper::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonomousTestShootFireFuelRotateHopper::End() {
	CommandBase::hopper.get()->SpinMotor(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousTestShootFireFuelRotateHopper::Interrupted() {
	End();
}
