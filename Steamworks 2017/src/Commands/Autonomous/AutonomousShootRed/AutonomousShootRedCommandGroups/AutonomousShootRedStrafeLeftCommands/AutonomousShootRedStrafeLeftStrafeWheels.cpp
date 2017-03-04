#include "AutonomousShootRedStrafeLeftStrafeWheels.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedStrafeLeftStrafeWheels::AutonomousShootRedStrafeLeftStrafeWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedStrafeLeftStrafeWheels::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedStrafeLeftStrafeWheels::Execute() {
	CommandBase::drivebase.get()->DriveMecanum(-0.75, 0, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedStrafeLeftStrafeWheels::IsFinished() {
	return timer->Get() >= 1;
}

// Called once after isFinished returns true
void AutonomousShootRedStrafeLeftStrafeWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedStrafeLeftStrafeWheels::Interrupted() {
	End();
}
