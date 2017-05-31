#include <Commands/TeleOp/TeleOpDriveBase/TeleOpDriveBaseDriveMecanum.h>
#include "../../../CommandBase.h"

TeleOpDriveBaseDriveMecanum::TeleOpDriveBaseDriveMecanum() {
	Requires(CommandBase::drivebase.get());
}

// Called just before this Command runs the first time
void TeleOpDriveBaseDriveMecanum::Initialize() {
	CommandBase::drivebase.get()->SwitchToPercentVbus();
	CommandBase::drivebase.get()->ResetGyro();
}

// Called repeatedly when this Command is scheduled to run
void TeleOpDriveBaseDriveMecanum::Execute() {
	//CommandBase::drivebase.get()->DriveMecanum(CommandBase::oi.get()->ReturnDriverAxis(0), CommandBase::oi.get()->ReturnDriverAxis(1), CommandBase::oi.get()->ReturnDriverAxis(4));
	CommandBase::drivebase.get()->DriveTank(CommandBase::oi.get()->ReturnDriverAxis(1) * -1, CommandBase::oi.get()->ReturnDriverAxis(5) * -1);
	//CommandBase::drivebase.get()->DriveMecanum(CommandBase::oi.get()->ReturnOperatorAxis(0), CommandBase::oi.get()->ReturnOperatorAxis(1), CommandBase::oi.get()->ReturnOperatorAxis(4));
	CommandBase::drivebase.get()->PutNumbersFromNavXMXP();
	CommandBase::drivebase.get()->ReturnDrivenTicks();
	CommandBase::drivebase.get()->ReturnDrivenInches(1.5);
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpDriveBaseDriveMecanum::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpDriveBaseDriveMecanum::End() {
	//CommandBase::drivebase.get()->DriveMecanum(0, 0, 0);
	CommandBase::drivebase.get()->DriveTank(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpDriveBaseDriveMecanum::Interrupted() {
	End();
}
