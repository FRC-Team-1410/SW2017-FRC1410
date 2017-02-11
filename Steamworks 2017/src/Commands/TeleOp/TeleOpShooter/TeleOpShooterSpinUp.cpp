#include "TeleOpShooterSpinUp.h"
#include "../../../CommandBase.h"

TeleOpShooterSpinUp::TeleOpShooterSpinUp() {
	Requires(CommandBase::shooter.get());
}

// Called just before this Command runs the first time
void TeleOpShooterSpinUp::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleOpShooterSpinUp::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(1850);
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpShooterSpinUp::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpShooterSpinUp::End() {
	CommandBase::shooter.get()->SpinUpSpinner(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpShooterSpinUp::Interrupted() {
	End();
}
