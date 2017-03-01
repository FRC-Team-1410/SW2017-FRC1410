#include "AutonomousTestTurnDriveTurnMoveWheels.h"
#include "../../../../../CommandBase.h"

AutonomousTestTurnDriveTurnMoveWheels::AutonomousTestTurnDriveTurnMoveWheels() {
	Requires(CommandBase::drivebase.get());
}

// Called just before this Command runs the first time
void AutonomousTestTurnDriveTurnMoveWheels::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void AutonomousTestTurnDriveTurnMoveWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousTestTurnDriveTurnMoveWheels::IsFinished() {
	return CommandBase::drivebase.get()->ReturnAngle() <= 270;
}

// Called once after isFinished returns true
void AutonomousTestTurnDriveTurnMoveWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousTestTurnDriveTurnMoveWheels::Interrupted() {
	End();
}
