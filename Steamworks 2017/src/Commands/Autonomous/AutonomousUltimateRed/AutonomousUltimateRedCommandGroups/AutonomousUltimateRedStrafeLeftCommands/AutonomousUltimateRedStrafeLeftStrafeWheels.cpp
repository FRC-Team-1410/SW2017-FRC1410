#include "AutonomousUltimateRedStrafeLeftStrafeWheels.h"
#include "../../../../../CommandBase.h"

AutonomousUltimateRedStrafeLeftStrafeWheels::AutonomousUltimateRedStrafeLeftStrafeWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedStrafeLeftStrafeWheels::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedStrafeLeftStrafeWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(-0.75, 0, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedStrafeLeftStrafeWheels::IsFinished() {
	return timer->Get() >= 0.7;
}

// Called once after isFinished returns true
void AutonomousUltimateRedStrafeLeftStrafeWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedStrafeLeftStrafeWheels::Interrupted() {
	End();
}
