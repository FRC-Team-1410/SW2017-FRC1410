#include "TeleOpGearIntakeRotateArm.h"
#include "../../../CommandBase.h"

TeleOpGearIntakeRotateArm::TeleOpGearIntakeRotateArm() {
	Requires(CommandBase::gearintake.get());
}

// Called just before this Command runs the first time
void TeleOpGearIntakeRotateArm::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleOpGearIntakeRotateArm::Execute() {
	CommandBase::gearintake.get()->DriveRotationMotor(CommandBase::oi.get()->ReturnOperatorAxis(5));
	SmartDashboard::PutBoolean("GEAR PRESENT", CommandBase::gearintake.get()->ReturnGearPresent());
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpGearIntakeRotateArm::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpGearIntakeRotateArm::End() {
	CommandBase::gearintake.get()->DriveRotationMotor(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpGearIntakeRotateArm::Interrupted() {
	End();
}
