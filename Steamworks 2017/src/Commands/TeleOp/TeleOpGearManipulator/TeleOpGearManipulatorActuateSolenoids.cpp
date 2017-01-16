#include "TeleOpGearManipulatorActuateSolenoids.h"
#include "../../../CommandBase.h"

TeleOpGearManipulatorActuateSolenoids::TeleOpGearManipulatorActuateSolenoids() {
	Requires(CommandBase::gearmanipulator.get());
	move_forward = false;
}

// Called just before this Command runs the first time
void TeleOpGearManipulatorActuateSolenoids::Initialize() {
	move_forward = !move_forward;
}

// Called repeatedly when this Command is scheduled to run
void TeleOpGearManipulatorActuateSolenoids::Execute() {
	if(move_forward){
		CommandBase::gearmanipulator.get()->ActuateSolenoids(true);
	}
	else{
		CommandBase::gearmanipulator.get()->ActuateSolenoids(false);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpGearManipulatorActuateSolenoids::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void TeleOpGearManipulatorActuateSolenoids::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpGearManipulatorActuateSolenoids::Interrupted() {
	End();
}
