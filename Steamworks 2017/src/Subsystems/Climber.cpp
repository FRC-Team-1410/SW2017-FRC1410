#include "Climber.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"
#include "../Commands/TeleOp/TeleOpClimber/TeleOpClimberDoTheClimbyClimby.h"

Climber::Climber() : frc::Subsystem("Climber") {
	initialized = false;
	motor_one = 0;
	motor_two = 0;
}

void Climber::InitDefaultCommand() {
	if(!initialized){
		Climber::InitializeHardware();
	}
	SetDefaultCommand(new TeleOpClimberDoTheClimbyClimby());
}

void Climber::InitializeHardware(){
	initialized = true;
	motor_one = new CANTalon(5);
	motor_two = new CANTalon(7);
}

void Climber::RotateZeDrum(float speed){
	motor_one->Set(speed);
	motor_two->Set(speed);
}
