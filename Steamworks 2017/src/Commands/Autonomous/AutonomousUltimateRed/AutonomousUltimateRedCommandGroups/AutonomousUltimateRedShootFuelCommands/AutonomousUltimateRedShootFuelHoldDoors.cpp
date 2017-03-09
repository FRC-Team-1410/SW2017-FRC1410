#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedShootFuelCommands/AutonomousUltimateRedShootFuelHoldDoors.h>
#include "../../../../../CommandBase.h"

AutonomousUltimateRedShootFuelHoldDoors::AutonomousUltimateRedShootFuelHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedShootFuelHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedShootFuelHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedShootFuelHoldDoors::IsFinished() {
	return timer->Get() >= 8.5;
}

// Called once after isFinished returns true
void AutonomousUltimateRedShootFuelHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedShootFuelHoldDoors::Interrupted() {
	End();
}
