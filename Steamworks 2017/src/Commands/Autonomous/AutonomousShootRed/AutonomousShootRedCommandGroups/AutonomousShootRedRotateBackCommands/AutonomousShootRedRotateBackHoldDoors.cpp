#include "AutonomousShootRedRotateBackHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedRotateBackHoldDoors::AutonomousShootRedRotateBackHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedRotateBackHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedRotateBackHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedRotateBackHoldDoors::IsFinished() {
	return timer->Get() >= 1;
}

// Called once after isFinished returns true
void AutonomousShootRedRotateBackHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedRotateBackHoldDoors::Interrupted() {
	End();
}
