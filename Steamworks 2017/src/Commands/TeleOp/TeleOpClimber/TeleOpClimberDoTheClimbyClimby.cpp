#include "TeleOpClimberDoTheClimbyClimby.h"
#include "../../../CommandBase.h"

TeleOpClimberDoTheClimbyClimby::TeleOpClimberDoTheClimbyClimby() {
	Requires(CommandBase::climber.get());
}

// Called just before this Command runs the first time
void TeleOpClimberDoTheClimbyClimby::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleOpClimberDoTheClimbyClimby::Execute() {
	CommandBase::climber.get()->RotateZeDrum(CommandBase::oi.get()->ReturnOperatorAxis(5));
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpClimberDoTheClimbyClimby::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpClimberDoTheClimbyClimby::End() {
	CommandBase::climber.get()->RotateZeDrum(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpClimberDoTheClimbyClimby::Interrupted() {
	End();
}
