#include "AutonomousTestGyroDriveStraightMoveWheels.h"
#include "../../../../../CommandBase.h"

AutonomousTestGyroDriveStraightMoveWheels::AutonomousTestGyroDriveStraightMoveWheels() {
	Requires(CommandBase::drivebase.get());
}

// Called just before this Command runs the first time
void AutonomousTestGyroDriveStraightMoveWheels::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutonomousTestGyroDriveStraightMoveWheels::Execute() {
	float angle = CommandBase::drivebase.get()->ReturnAngle();
	std::string direction = 0;

	float left_speed = 0.5;
	float right_speed = -0.5;

	if(0 < angle && angle <= 90){
		direction = "LEFT";
	}

	else if(270 <= angle && angle < 360){
		direction = "RIGHT";
	}

	else if(angle == 0){
		direction = "STRAIGHT";
	}

	float deviation;

	if(direction == "STRAIGHT"){
		deviation = 0;

		left_speed *= 1;
		right_speed *= 1;
	}

	else if(direction == "LEFT"){
		deviation = (angle / 90);

		left_speed *= (1 + deviation);
		right_speed *= 1;
	}

	else if(direction == "RIGHT"){
		angle -= 270;
		float new_angle = (90 - angle);

		deviation = (new_angle / 90);

		left_speed *= 1;
		right_speed *= (1 + deviation);
	}

	CommandBase::drivebase.get()->DriveStraight(left_speed, right_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousTestGyroDriveStraightMoveWheels::IsFinished() {
	return CommandBase::drivebase.get()->ReturnDrivenInches(3.0) >= 60;
}

// Called once after isFinished returns true
void AutonomousTestGyroDriveStraightMoveWheels::End() {
	CommandBase::drivebase.get()->DriveStraight(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousTestGyroDriveStraightMoveWheels::Interrupted() {
	End();
}
