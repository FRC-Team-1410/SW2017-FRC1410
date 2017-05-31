#include "TeleOpGearIntakeSpinWheels.h"
#include "../../../CommandBase.h"

TeleOpGearIntakeSpinWheels::TeleOpGearIntakeSpinWheels(float input_speed) {
	Requires(CommandBase::gearintake.get());
	speed = input_speed;
}

// Called just before this Command runs the first time
void TeleOpGearIntakeSpinWheels::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleOpGearIntakeSpinWheels::Execute() {
	CommandBase::gearintake.get()->DriveWheelsMotor(speed);
	SmartDashboard::PutBoolean("GEAR PRESENT", CommandBase::gearintake.get()->ReturnGearPresent());
	CommandBase::gearintake.get()->DriveRotationMotor(CommandBase::oi.get()->ReturnOperatorAxis(5));
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpGearIntakeSpinWheels::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpGearIntakeSpinWheels::End() {
	CommandBase::gearintake.get()->DriveWheelsMotor(0);
	CommandBase::gearintake.get()->DriveRotationMotor(CommandBase::oi.get()->ReturnOperatorAxis(5));
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpGearIntakeSpinWheels::Interrupted() {
	End();
}
