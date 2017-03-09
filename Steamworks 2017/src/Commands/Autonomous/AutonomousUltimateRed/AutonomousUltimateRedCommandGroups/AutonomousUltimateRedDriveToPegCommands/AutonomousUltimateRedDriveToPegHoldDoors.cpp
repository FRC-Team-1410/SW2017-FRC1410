#include "AutonomousUltimateRedDriveToPegHoldDoors.h"
#include "../../../../../CommandBase.h"

AutonomousUltimateRedDriveToPegHoldDoors::AutonomousUltimateRedDriveToPegHoldDoors() {
	Requires(CommandBase::gearmanipulator.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedDriveToPegHoldDoors::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedDriveToPegHoldDoors::Execute() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedDriveToPegHoldDoors::IsFinished() {
	return CommandBase::drivebase.get()->ReturnDrivenInches(1.5) >= 93 || timer->Get() >= 3.5;
}

// Called once after isFinished returns true
void AutonomousUltimateRedDriveToPegHoldDoors::End() {
	CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0.5);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedDriveToPegHoldDoors::Interrupted() {
	End();
}
