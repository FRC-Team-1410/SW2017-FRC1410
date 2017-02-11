#include <Commands/TeleOp/TeleOpHopper/TeleOpHopperAgitateBalls.h>
#include "../../../CommandBase.h"

TeleOpHopperAgitateBalls::TeleOpHopperAgitateBalls() {
	Requires(CommandBase::agitate.get());
}

// Called just before this Command runs the first time
void TeleOpHopperAgitateBalls::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleOpHopperAgitateBalls::Execute() {
	CommandBase::agitate.get()->DriveHopperMotor(-1);
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpHopperAgitateBalls::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpHopperAgitateBalls::End() {
	CommandBase::agitate.get()->DriveHopperMotor(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpHopperAgitateBalls::Interrupted() {
	End();
}
