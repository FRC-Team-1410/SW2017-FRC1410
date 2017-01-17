#include "GearManipulator.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"

GearManipulator::GearManipulator() : frc::Subsystem("GearManipulator") {
	initialized = false;
	left_solenoid = 0;
	//right_solenoid = 0;
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
