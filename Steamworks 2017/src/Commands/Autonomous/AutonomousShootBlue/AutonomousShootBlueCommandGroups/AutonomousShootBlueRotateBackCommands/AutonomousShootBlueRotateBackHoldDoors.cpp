#include "AutonomousShootBlueRotateBackHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousShootBlueRotateBackHoldDoors::AutonomousShootBlueRotateBackHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootBlueRotateBackHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootBlueRotateBackHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootBlueRotateBackHoldDoors::IsFinished() {
	return CommandBase::drivebase.get()->ReturnAngle() <= -20 || timer->Get() >= 1;
}

// Called once after isFinished returns true
void AutonomousShootBlueRotateBackHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootBlueRotateBackHoldDoors::Interrupted() {
	End();
}
