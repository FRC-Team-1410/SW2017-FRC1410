#include "Shooter.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Shooter::Shooter() : frc::Subsystem("Shooter") {
	initialized = false;
}

void Shooter::InitDefaultCommand() {
	if(!initialized){
		Shooter::InitializeHardware();
	}
}

void Shooter::InitializeHardware(){
	initialized = true;
}
