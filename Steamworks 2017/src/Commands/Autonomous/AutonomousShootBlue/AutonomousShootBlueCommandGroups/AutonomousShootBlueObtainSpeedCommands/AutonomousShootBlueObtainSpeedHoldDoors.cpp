#include "AutonomousShootBlueObtainSpeedHoldDoors.h"
#include "../../../../../CommandBase.h"
#include "../../../../../RobotMap.h"

AutonomousShootBlueObtainSpeedHoldDoors::AutonomousShootBlueObtainSpeedHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousShootBlueObtainSpeedHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootBlueObtainSpeedHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootBlueObtainSpeedHoldDoors::IsFinished() {
	return CommandBase::shooter.get()->ReturnShooterSpeed() >= shooter_target_speed || timer->Get() >= 2.5;
}

// Called once after isFinished returns true
void AutonomousShootBlueObtainSpeedHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootBlueObtainSpeedHoldDoors::Interrupted() {
	End();
}
