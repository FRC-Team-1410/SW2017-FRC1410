#include "AutonomousUltimateRedObtainSpeedSpinShooter.h"
#include "../../../../../CommandBase.h"
#include "../../../../../RobotMap.h"

AutonomousUltimateRedObtainSpeedSpinShooter::AutonomousUltimateRedObtainSpeedSpinShooter() {
	Requires(CommandBase::shooter.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void AutonomousUltimateRedObtainSpeedSpinShooter::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousUltimateRedObtainSpeedSpinShooter::Execute() {
	CommandBase::shooter.get()->SpinUpSpinner(shooter_set_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousUltimateRedObtainSpeedSpinShooter::IsFinished() {
	return CommandBase::shooter.get()->ReturnShooterSpeed() >= shooter_target_speed || timer->Get() >= 1.0;
}

// Called once after isFinished returns true
void AutonomousUltimateRedObtainSpeedSpinShooter::End() {
	CommandBase::shooter.get()->SpinUpSpinner(shooter_set_speed);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousUltimateRedObtainSpeedSpinShooter::Interrupted() {
	End();
}
