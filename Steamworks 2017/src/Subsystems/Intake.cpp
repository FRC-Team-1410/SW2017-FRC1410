#include "Intake.h"
#include <CANTalon.h>
#include <Commands/TeleOp/TeleOpIntake/TeleOpIntakeObtainTallywags.h>
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
	//SetDefaultCommand(new TeleOpIntakeObtainBalls());
}

void Intake::InitializeHardware(){
	initialized = true;

	intake_motor = new CANTalon(10);
}

void Intake::DriveIntakeMotor(float speed){
	intake_motor->Set(speed);
}
