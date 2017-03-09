#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedRotateMoreCommands/AutonomousUltimateRedRotateMoreHoldDoors.h>
#include "../../../../../CommandBase.h"

AutonomousUltimateRedRotateMoreHoldDoors::AutonomousUltimateRedRotateMoreHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedRotateMoreHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedRotateMoreHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedRotateMoreHoldDoors::IsFinished() {
	return timer->Get() >= 1;
}

// Called once after isFinished returns true
void AutonomousUltimateRedRotateMoreHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedRotateMoreHoldDoors::Interrupted() {
	End();
}
