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

	intake_motor = new CANTalon(9);
	intake_motor->ConfigMaxOutputVoltage(12);
}

void Intake::DriveIntakeMotor(float speed){
	intake_motor->Set(-0.65 * speed);
	SmartDashboard::PutNumber("INTAKE CURRENT DRAW", intake_motor->GetOutputCurrent());
	SmartDashboard::PutNumber("INTAKE VOLTAGE DRAW", intake_motor->GetOutputVoltage());
}
