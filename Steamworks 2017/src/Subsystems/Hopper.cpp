#include "Hopper.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Hopper::Hopper() : frc::Subsystem("Hopper"){
	initialized = false;

	motor = 0;
}

void Hopper::InitDefaultCommand(){
	if(!initialized){
		Hopper::InitializeHardware();
	}
}

void Hopper::InitializeHardware(){
	initialized = true;

	motor = new CANTalon(hopper_rotation_motor_id);
}

void Hopper::SpinMotor(float speed){
	if(!initialized){
		Hopper::InitializeHardware();
	}
	motor->Set(speed);
}
