#include "TeleOpHopperDoTheLaundry.h"
#include "../../../CommandBase.h"

TeleOpHopperDoTheLaundry::TeleOpHopperDoTheLaundry() {
	Requires(CommandBase::hopper.get());
}

// Called just before this Command runs the first time
void TeleOpHopperDoTheLaundry::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleOpHopperDoTheLaundry::Execute() {
	CommandBase::hopper.get()->SpinMotor(1.00);
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpHopperDoTheLaundry::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpHopperDoTheLaundry::End() {
	CommandBase::hopper.get()->SpinMotor(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpHopperDoTheLaundry::Interrupted() {
	End();
}
