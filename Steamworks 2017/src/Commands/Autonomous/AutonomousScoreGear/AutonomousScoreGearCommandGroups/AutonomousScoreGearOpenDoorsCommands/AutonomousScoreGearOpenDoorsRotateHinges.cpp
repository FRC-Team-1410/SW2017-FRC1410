#include "AutonomousScoreGearOpenDoorsRotateHinges.h"
#include "../../../../../CommandBase.h"

AutonomousScoreGearOpenDoorsRotateHinges::AutonomousScoreGearOpenDoorsRotateHinges() {
	Requires(CommandBase::gearmanipulator.get());

	timer = new frc::Timer;
}

// Called just before this Command runs the first time
void AutonomousScoreGearOpenDoorsRotateHinges::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousScoreGearOpenDoorsRotateHinges::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousScoreGearOpenDoorsRotateHinges::IsFinished() {
	return timer->Get() >= 0.5;
}

// Called once after isFinished returns true
void AutonomousScoreGearOpenDoorsRotateHinges::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousScoreGearOpenDoorsRotateHinges::Interrupted() {
	End();
}
