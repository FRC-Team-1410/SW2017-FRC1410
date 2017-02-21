#include <Commands/Autonomous/AutonomousDriveBase/AutonomousDriveBaseDriveStraight.h>
#include "../../../CommandBase.h"

AutonomousDriveBaseDriveStraight::AutonomousDriveBaseDriveStraight() {
	Requires(CommandBase::drivebase.get());
}

// Called just before this Command runs the first time
void AutonomousDriveBaseDriveStraight::Initialize() {
	//CommandBase::drivebase.get()->SwitchToVoltage();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousDriveBaseDriveStraight::Execute() {
	CommandBase::drivebase.get()->DriveStraight(6);
	Wait(5);
	End();
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousDriveBaseDriveStraight::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void AutonomousDriveBaseDriveStraight::End() {
	CommandBase::drivebase.get()->DriveStraight(0);
	CommandBase::drivebase.get()->SwitchToPercentVbus();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousDriveBaseDriveStraight::Interrupted() {
	End();
}
