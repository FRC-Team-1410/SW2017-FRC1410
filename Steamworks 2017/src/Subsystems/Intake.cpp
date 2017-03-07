#include "Intake.h"
#include <CANTalon.h>
#include <Commands/TeleOp/TeleOpIntake/TeleOpIntakeObtainTallywags.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Intake::Intake() : frc::Subsystem("Intake") {
	initialized = false;
	intake_motor_one = 0;
	intake_motor_two = 0;
}

void Intake::InitDefaultCommand() {
	if(!initialized){
		Intake::InitializeHardware();
	}
	//SetDefaultCommand(new TeleOpIntakeObtainBalls());
}

void Intake::InitializeHardware(){
	initialized = true;

	intake_motor_one = new CANTalon(intake_motor_one_id);
	intake_motor_two = new CANTalon(intake_motor_two_id);
	//intake_motor->ConfigMaxOutputVoltage(12);
}

void Intake::DriveIntakeMotor(float speed){
	intake_motor_one->Set(-0.5 * speed);
	intake_motor_two->Set(0.5 * speed);
	//SmartDashboard::PutNumber("INTAKE ONE CURRENT DRAW", intake_motor_one->GetOutputCurrent());
	//SmartDashboard::PutNumber("INTAKE ONE VOLTAGE DRAW", intake_motor_one->GetOutputVoltage());
	//SmartDashboard::PutNumber("INTAKE TWO CURRENT DRAW", intake_motor_two->GetOutputCurrent());
	//SmartDashboard::PutNumber("INTAKE TWO VOLTAGE DRAW", intake_motor_two->GetOutputVoltage());
}
