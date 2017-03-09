#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedCloseDoorsCommands/AutonomousUltimateRedCloseDoorsRotateHinges.h>
#include "../../../../../CommandBase.h"

AutonomousUltimateRedCloseDoorsRotateHinges::AutonomousUltimateRedCloseDoorsRotateHinges() {
	Requires(CommandBase::gearmanipulator.get());

	timer = new frc::Timer;
}

// Called just before this Command runs the first time
void AutonomousUltimateRedCloseDoorsRotateHinges::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedCloseDoorsRotateHinges::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedCloseDoorsRotateHinges::IsFinished() {
	return timer->Get() >= 0.1;
}

// Called once after isFinished returns true
void AutonomousUltimateRedCloseDoorsRotateHinges::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedCloseDoorsRotateHinges::Interrupted() {
	End();
}
