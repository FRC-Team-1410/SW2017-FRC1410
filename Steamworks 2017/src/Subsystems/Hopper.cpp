#include "Hopper.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Hopper::Hopper() : frc::Subsystem("Hopper") {
	initialized = false;
}

void Hopper::InitDefaultCommand() {
	if(!initialized){
		Hopper::InitializeHardware();
	}
}

void Hopper::InitializeHardware(){
	initialized = true;
}
