#include "Climber.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Climber::Climber() : frc::Subsystem("Climber") {
	initialized = false;
}

void Climber::InitDefaultCommand() {
	if(!initialized){
		Climber::InitializeHardware();
	}
}

void Climber::InitializeHardware(){
	initialized = true;
}
