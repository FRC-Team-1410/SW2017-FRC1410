#include "AutonomousScoreGearDriveForwardHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousScoreGearDriveForwardHoldDoors::AutonomousScoreGearDriveForwardHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());

	timer = new frc::Timer;
}

// Called just before this Command runs the first time
void AutonomousScoreGearDriveForwardHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousScoreGearDriveForwardHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousScoreGearDriveForwardHoldDoors::IsFinished() {
	return timer->Get() >= 4;
}

// Called once after isFinished returns true
void AutonomousScoreGearDriveForwardHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousScoreGearDriveForwardHoldDoors::Interrupted() {
	End();
}
