#include "AutonomousShootRedDriveBackwardsDriveWheels.h"
#include "../../../../../CommandBase.h"

AutonomousShootRedDriveBackwardsDriveWheels::AutonomousShootRedDriveBackwardsDriveWheels() {
	Requires(CommandBase::drivebase.get());

	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootRedDriveBackwardsDriveWheels::Initialize() {
	timer->Start();
	CommandBase::drivebase.get()->ResetGyro();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootRedDriveBackwardsDriveWheels::Execute() {
	if(CommandBase::drivebase.get()->ReturnAngle() < 10){
		CommandBase::drivebase.get()->DriveMecanum(0, 0.5, 0.1);
	}
	else{
		CommandBase::drivebase.get()->DriveMecanum(0, 0.5, 0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootRedDriveBackwardsDriveWheels::IsFinished() {
	return CommandBase::drivebase.get()->ReturnDrivenInches(1.5) >= 100 || timer->Get() >= 3.5;
}

// Called once after isFinished returns true
void AutonomousShootRedDriveBackwardsDriveWheels::End() {
	CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootRedDriveBackwardsDriveWheels::Interrupted() {
	End();
}
