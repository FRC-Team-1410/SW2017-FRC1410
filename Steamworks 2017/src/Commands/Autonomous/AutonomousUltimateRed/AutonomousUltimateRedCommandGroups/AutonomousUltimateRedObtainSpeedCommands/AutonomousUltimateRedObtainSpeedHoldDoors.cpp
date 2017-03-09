#include "AutonomousUltimateRedObtainSpeedHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousUltimateRedObtainSpeedHoldDoors::AutonomousUltimateRedObtainSpeedHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedObtainSpeedHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedObtainSpeedHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedObtainSpeedHoldDoors::IsFinished() {
	return timer->Get() >= 2;
}

// Called once after isFinished returns true
void AutonomousUltimateRedObtainSpeedHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedObtainSpeedHoldDoors::Interrupted() {
	End();
}
