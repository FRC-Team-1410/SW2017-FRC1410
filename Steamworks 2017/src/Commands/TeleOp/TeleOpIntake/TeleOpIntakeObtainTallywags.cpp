#include "TeleOpIntakeObtainTallywags.h"
#include "../../../CommandBase.h"

TeleOpIntakeObtainTallywags::TeleOpIntakeObtainTallywags() {
	Requires(CommandBase::intake.get());
}

// Called just before this Command runs the first time
void TeleOpIntakeObtainTallywags::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleOpIntakeObtainTallywags::Execute() {
	CommandBase::intake.get()->DriveIntakeMotor(-1);
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpIntakeObtainTallywags::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpIntakeObtainTallywags::End() {
	CommandBase::intake.get()->DriveIntakeMotor(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpIntakeObtainTallywags::Interrupted() {
	End();
}
