#include "AutoTestShootObtainSpeedSpinUp.h"
#include "../../../../../CommandBase.h"
#include "../../../../../RobotMap.h"

AutoTestShootObtainSpeedSpinUp::AutoTestShootObtainSpeedSpinUp() {
	Requires(CommandBase::shooter.get());
}

// Called just before this Command runs the first time
void AutoTestShootObtainSpeedSpinUp::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutoTestShootObtainSpeedSpinUp::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(shooter_set_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoTestShootObtainSpeedSpinUp::IsFinished() {
	return CommandBase::shooter.get()->ReturnShooterSpeed() >= shooter_target_speed;
}

// Called once after isFinished returns true
void AutoTestShootObtainSpeedSpinUp::End() {
	CommandBase::shooter.get()->SpinUpSpinner(shooter_set_speed);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoTestShootObtainSpeedSpinUp::Interrupted() {
	End();
}
