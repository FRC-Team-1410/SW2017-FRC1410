#include "TeleOpGearOpenTopFlap.h"
#include "../../../CommandBase.h"

TeleOpGearOpenTopFlap::TeleOpGearOpenTopFlap() {
	Requires(CommandBase::gearmanipulator.get());
	move_forward = false;
}

// Called just before this Command runs the first time
void TeleOpGearOpenTopFlap::Initialize() {
	move_forward = !move_forward;
	if(move_forward){
			CommandBase::gearmanipulator.get()->MoveTopFlap(0.75);
			//SmartDashboard::PutNumber("Door Position", 0.5);
		}
		else{
			CommandBase::gearmanipulator.get()->MoveTopFlap(0);
			//SmartDashboard::PutNumber("Door Position", 0);
		}
}

// Called repeatedly when this Command is scheduled to run
void TeleOpGearOpenTopFlap::Execute() {
	if(move_forward){
		CommandBase::gearmanipulator.get()->MoveTopFlap(0.75);
		//SmartDashboard::PutNumber("Door Position", 0.5);
	}
	else{
		CommandBase::gearmanipulator.get()->MoveTopFlap(0);
		//SmartDashboard::PutNumber("Door Position", 0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpGearOpenTopFlap::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void TeleOpGearOpenTopFlap::End() {
	if(move_forward){
			CommandBase::gearmanipulator.get()->MoveTopFlap(0.75);
			//SmartDashboard::PutNumber("Door Position", 0.5);
		}
		else{
			CommandBase::gearmanipulator.get()->MoveTopFlap(0);
			//SmartDashboard::PutNumber("Door Position", 0);
		}
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpGearOpenTopFlap::Interrupted() {
	End();
}
