#include "AutonomousShootRedShootFuelHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedShootFuelHoldDoors::AutonomousShootRedShootFuelHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedShootFuelHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedShootFuelHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedShootFuelHoldDoors::IsFinished() {
	return timer->Get() >= 10;
}

// Called once after isFinished returns true
void AutonomousShootRedShootFuelHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedShootFuelHoldDoors::Interrupted() {
	End();
}
