#include "GearManipulator.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"

GearManipulator::GearManipulator() : frc::Subsystem("GearManipulator") {
	initialized = false;
	left_solenoid = 0;
	//right_solenoid = 0;

	left_servo = 0;
	right_servo = 0;
}

void GearManipulator::InitDefaultCommand() {
	if(!initialized){
		GearManipulator::InitializeHardware();
	}
}

void GearManipulator::InitializeHardware(){
	initialized = true;

	left_solenoid = new DoubleSolenoid(0,1);
	//right_solenoid = new DoubleSolenoid(2,3);

	left_servo = new Servo(0);
	right_servo = new Servo(1);
}

void GearManipulator::ActuateSolenoids(bool forward){
	if(!initialized){
		GearManipulator::InitializeHardware();
	}

	if(forward){
		left_solenoid->Set(DoubleSolenoid::Value::kForward);
		//right_solenoid->Set(DoubleSolenoid::Value::kForward);
	}
	else{
			left_solenoid->Set(DoubleSolenoid::Value::kReverse);
			//right_solenoid->Set(DoubleSolenoid::Value::kReverse);
		}
}

void GearManipulator::FlapDoorsToHolderFastly(float magnitude){
	if(!initialized){
		GearManipulator::InitializeHardware();
	}
	left_servo->Set(magnitude);
	right_servo->Set(magnitude);
}
