#include "AutonomousTestDropoffOpenDoorsRotateHinges.h"
#include "../../../../../CommandBase.h"

AutonomousTestDropoffOpenDoorsRotateHinges::AutonomousTestDropoffOpenDoorsRotateHinges() {
	Requires(CommandBase::gearmanipulator.get());
}

// Called just before this Command runs the first time
void AutonomousTestDropoffOpenDoorsRotateHinges::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutonomousTestDropoffOpenDoorsRotateHinges::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousTestDropoffOpenDoorsRotateHinges::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonomousTestDropoffOpenDoorsRotateHinges::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousTestDropoffOpenDoorsRotateHinges::Interrupted() {
	End();
}
