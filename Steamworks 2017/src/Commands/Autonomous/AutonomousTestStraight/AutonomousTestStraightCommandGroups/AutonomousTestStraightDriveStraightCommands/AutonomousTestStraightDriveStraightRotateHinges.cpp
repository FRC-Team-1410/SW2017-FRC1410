#include "AutonomousTestStraightDriveStraightRotateHinges.h"
#include "../../../../../CommandBase.h"

AutonomousTestStraightDriveStraightRotateHinges::AutonomousTestStraightDriveStraightRotateHinges() {
	Requires(CommandBase::gearmanipulator.get());
}

// Called just before this Command runs the first time
void AutonomousTestStraightDriveStraightRotateHinges::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutonomousTestStraightDriveStraightRotateHinges::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousTestStraightDriveStraightRotateHinges::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonomousTestStraightDriveStraightRotateHinges::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousTestStraightDriveStraightRotateHinges::Interrupted() {
	End();
}
