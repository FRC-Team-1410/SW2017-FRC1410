#include "AutoTestShootObtainSpeedSpinUp.h"

AutoTestShootObtainSpeedSpinUp::AutoTestShootObtainSpeedSpinUp() {
	Requires(CommandBase::shooter.get());
}

// Called just before this Command runs the first time
void AutoTestShootObtainSpeedSpinUp::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutoTestShootObtainSpeedSpinUp::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoTestShootObtainSpeedSpinUp::IsFinished() {
	return CommandBase::shooter.get()->ReturnShooterSpeed() >= 21000;
}

// Called once after isFinished returns true
void AutoTestShootObtainSpeedSpinUp::End() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoTestShootObtainSpeedSpinUp::Interrupted() {
	End();
}
