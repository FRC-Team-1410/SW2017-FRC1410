#include "AutonomousTestShootFireFuelMaintainSpeed.h"
#include "../../../../../CommandBase.h"

AutonomousTestShootFireFuelMaintainSpeed::AutonomousTestShootFireFuelMaintainSpeed() {
	Requires(CommandBase::shooter.get());
}

// Called just before this Command runs the first time
void AutonomousTestShootFireFuelMaintainSpeed::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutonomousTestShootFireFuelMaintainSpeed::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(1850); //murica fuck yeah
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousTestShootFireFuelMaintainSpeed::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonomousTestShootFireFuelMaintainSpeed::End() {
	CommandBase::shooter.get()->SpinUpSpinner(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousTestShootFireFuelMaintainSpeed::Interrupted() {
	End();
}
