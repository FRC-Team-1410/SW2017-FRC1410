#include "Intake.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Intake::Intake() : frc::Subsystem("Intake") {
	initialized = false;
	intake_motor = 0;
}

void Intake::InitDefaultCommand() {
	if(!initialized){
		Intake::InitializeHardware();
	}
}

void Intake::InitializeHardware(){
	initialized = true;

	intake_motor = new CANTalon(9);
}

void Intake::DriveIntakeMotor(float speed){
	intake_motor->Set(speed);
}
