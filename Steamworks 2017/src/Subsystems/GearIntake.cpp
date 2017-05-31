#include <CANTalon.h>
#include <Commands/TeleOp/TeleOpGearIntake/TeleOpGearIntakeRotateArm.h>
#include "GearIntake.h"
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

GearIntake::GearIntake() : frc::Subsystem("GearIntake") {
	initialized = false;
	intake_rotation_motor = 0;
	intake_wheels_motor = 0;
	gear_indicator = 0;
}

void GearIntake::InitDefaultCommand() {
	if(!initialized){
		GearIntake::InitializeHardware();
	}
	SetDefaultCommand(new TeleOpGearIntakeRotateArm());
}

void GearIntake::InitializeHardware(){
	initialized = true;

	intake_rotation_motor = new CANTalon(intake_rotation_motor_id);
	intake_wheels_motor = new CANTalon(intake_wheels_motor_id);

	gear_indicator = new frc::DigitalInput(0);
	//intake_motor->ConfigMaxOutputVoltage(12);
}

void GearIntake::DriveRotationMotor(float speed){
	intake_rotation_motor->Set(speed * -0.6);
}

void GearIntake::DriveWheelsMotor(float speed){
	intake_wheels_motor->Set(speed);
}

bool GearIntake::ReturnGearPresent(){
	return gear_indicator->Get();
}
