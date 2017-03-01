#include "AutonomousTestStraightDriveStraightMoveWheels.h"
#include "../../../../../CommandBase.h"

AutonomousTestStraightDriveStraightMoveWheels::AutonomousTestStraightDriveStraightMoveWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousTestStraightDriveStraightMoveWheels::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousTestStraightDriveStraightMoveWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0.5, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousTestStraightDriveStraightMoveWheels::IsFinished() {
	return timer->Get() >= 5;
}

// Called once after isFinished returns true
void AutonomousTestStraightDriveStraightMoveWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0.5, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousTestStraightDriveStraightMoveWheels::Interrupted() {
	End();
}
