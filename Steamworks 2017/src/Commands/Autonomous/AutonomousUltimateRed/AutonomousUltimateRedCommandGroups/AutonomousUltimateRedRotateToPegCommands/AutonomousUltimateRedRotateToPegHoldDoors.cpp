#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedRotateToPegCommands/AutonomousUltimateRedRotateToPegHoldDoors.h>
#include "../../../../../CommandBase.h"

AutonomousUltimateRedRotateToPegHoldDoors::AutonomousUltimateRedRotateToPegHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedRotateToPegHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedRotateToPegHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedRotateToPegHoldDoors::IsFinished() {
	return CommandBase::drivebase.get()->ReturnAngle() <= -60 || timer->Get() >= 1.0;
}

// Called once after isFinished returns true
void AutonomousUltimateRedRotateToPegHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedRotateToPegHoldDoors::Interrupted() {
	End();
}
