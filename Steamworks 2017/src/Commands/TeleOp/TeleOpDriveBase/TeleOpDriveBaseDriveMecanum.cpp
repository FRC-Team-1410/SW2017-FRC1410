#include "TeleOpDriveBaseDriveMecanum.h"
#include "../../../CommandBase.h"
#include "../../../Robot.h"
#include "../../../OI.h"

TeleOpDriveBaseDriveMecanum::TeleOpDriveBaseDriveMecanum() {
	Requires(Robot::drivebase);
}

void TeleOpDriveBaseDriveMecanum::Initialize() {

}

void TeleOpDriveBaseDriveMecanum::Execute() {
	Robot::drivebase->DriveMecanum(Robot::oi->ReturnDriverAxis(0), Robot::oi->ReturnDriverAxis(1), Robot::oi->ReturnDriverAxis(4));
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpDriveBaseDriveMecanum::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpDriveBaseDriveMecanum::End() {
	Robot::drivebase->DriveMecanum(0,0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpDriveBaseDriveMecanum::Interrupted() {
	End();
}
