#include "TeleOpGearFlipFlopTheFloppyDoors.h"
#include "../../../CommandBase.h"

TeleOpGearFlipFlopTheFloppyDoors::TeleOpGearFlipFlopTheFloppyDoors() {
	Requires(CommandBase::gearmanipulator.get());
	move_forward = false;
}

// Called just before this Command runs the first time
void TeleOpGearFlipFlopTheFloppyDoors::Initialize() {
	move_forward = !move_forward;
}

// Called repeatedly when this Command is scheduled to run
void TeleOpGearFlipFlopTheFloppyDoors::Execute() {
	if(move_forward){
		CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(.5);
	}
	else{
		CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpGearFlipFlopTheFloppyDoors::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void TeleOpGearFlipFlopTheFloppyDoors::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpGearFlipFlopTheFloppyDoors::Interrupted() {
	End();
}
