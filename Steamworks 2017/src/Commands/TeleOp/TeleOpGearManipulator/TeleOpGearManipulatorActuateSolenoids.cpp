#include "TeleOpGearManipulatorActuateSolenoids.h"
#include "../../../CommandBase.h"

TeleOpGearManipulatorActuateSolenoids::TeleOpGearManipulatorActuateSolenoids() {
	Requires(CommandBase::gearmanipulator.get());
	move_forward = false;
}

// Called just before this Command runs the first time
void TeleOpGearManipulatorActuateSolenoids::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void TeleOpGearManipulatorActuateSolenoids::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
	End();
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpGearManipulatorActuateSolenoids::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void TeleOpGearManipulatorActuateSolenoids::End() {
	//CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpGearManipulatorActuateSolenoids::Interrupted() {
	End();
}
