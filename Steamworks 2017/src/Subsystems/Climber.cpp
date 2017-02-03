#include "Climber.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"
#include "../Commands/TeleOp/TeleOpClimber/TeleOpClimberDoTheClimbyClimby.h"

Climber::Climber() : frc::Subsystem("Climber") {
	initialized = false;
	climbing_motor = 0;
}

void Climber::InitDefaultCommand() {
	if(!initialized){
		Climber::InitializeHardware();
	}
	SetDefaultCommand(new TeleOpClimberDoTheClimbyClimby());
}

void Climber::InitializeHardware(){
	initialized = true;
	climbing_motor = new CANTalon(6);
}

void Climber::RotateZeDrum(float speed){
	climbing_motor->Set(speed);
}
