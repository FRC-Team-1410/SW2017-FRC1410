#include "Climber.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"
#include "../Commands/TeleOp/TeleOpClimber/TeleOpClimberDoTheClimbyClimby.h"

Climber::Climber() : frc::Subsystem("Climber") {
	initialized = false;
	climbing_motor_one = 0;
	climbing_motor_two = 0;
}

void Climber::InitDefaultCommand() {
	if(!initialized){
		Climber::InitializeHardware();
	}
	//SetDefaultCommand(new TeleOpClimberDoTheClimbyClimby());
}

void Climber::InitializeHardware(){
	initialized = true;

	climbing_motor_one = new CANTalon(5);
	climbing_motor_two = new CANTalon(7);
}

void Climber::RotateZeDrum(float speed){
	climbing_motor_one->Set(speed);
	climbing_motor_two->Set(speed);

	//SmartDashboard::PutNumber("CLIMBING VOLTAGE DRAW 1", climbing_motor_one->GetOutputVoltage());
	//SmartDashboard::PutNumber("CLIMBING CURRENT DRAW 1", climbing_motor_one->GetOutputCurrent());
	//SmartDashboard::PutNumber("CLIMBING VOLTAGE DRAW 2", climbing_motor_two->GetOutputVoltage());
	//SmartDashboard::PutNumber("CLIMBING CURRENT DRAW 2", climbing_motor_two->GetOutputCurrent());
}
