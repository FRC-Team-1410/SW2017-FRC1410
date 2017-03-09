#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedOpenDoorsCommands/AutonomousUltimateRedOpenDoorsRotateHinges.h>
#include "../../../../../CommandBase.h"

AutonomousUltimateRedOpenDoorsRotateHinges::AutonomousUltimateRedOpenDoorsRotateHinges() {
	Requires(CommandBase::gearmanipulator.get());

	timer = new frc::Timer;
}

// Called just before this Command runs the first time
void AutonomousUltimateRedOpenDoorsRotateHinges::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedOpenDoorsRotateHinges::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedOpenDoorsRotateHinges::IsFinished() {
	return timer->Get() >= 0.1;
}

// Called once after isFinished returns true
void AutonomousUltimateRedOpenDoorsRotateHinges::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedOpenDoorsRotateHinges::Interrupted() {
	End();
}
