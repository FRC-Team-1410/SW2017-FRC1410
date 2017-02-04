#include "Shooter.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Shooter::Shooter() : frc::Subsystem("Shooter") {
	initialized = false;
	motor_one = 0;
	motor_two = 0;
}

void Shooter::InitDefaultCommand() {
	if(!initialized){
		Shooter::InitializeHardware();
	}
}

void Shooter::InitializeHardware(){
	initialized = true;

	motor_one = new CANTalon(6);
	motor_two = new CANTalon(8);

	motor_one->SetFeedbackDevice(CANTalon::CtreMagEncoder_Relative);
	//motor_two->SetFeedbackDevice(CANTalon::CtreMagEncoder_Relative);

	motor_one->SetControlMode(frc::CANSpeedController::ControlMode::kSpeed);
	motor_two->SetControlMode(frc::CANSpeedController::ControlMode::kFollower);

	motor_one->SetSensorDirection(true);
	//motor_two->SetSensorDirection(true);

	motor_one->SetVoltageRampRate(12);
	//motor_one->SetVoltageRampRate(12);

	motor_one->ConfigNominalOutputVoltage(+0.0f, -0.0f);
	//motor_two->ConfigNominalOutputVoltage(+0.0f, -0.0f);

	motor_one->ConfigPeakOutputVoltage(+0.0f, -12.0f);
	//motor_two->ConfigPeakOutputVoltage(+0.0f, -12.0f);

	motor_one->SetPID(0, 0, 0, 0.05);
	//motor_two->SetPID(0, 0, 0, 0.05);
}

void Shooter::SpinUpSpinner(float speed){
	if(!initialized){
		Shooter::InitializeHardware();
	}
	motor_one->Set(speed);
	motor_two->Set(6);

	SmartDashboard::PutNumber("Shooter Motor 1 Output Voltage (~6.9)", motor_one->GetOutputVoltage());
	SmartDashboard::PutNumber("Shooter Motor 2 Output Voltage (~6.9)", motor_two->GetOutputVoltage());

	SmartDashboard::PutNumber("Shooter Motor 1 Encoder Velocity (~20000)", motor_one->GetEncVel());
	//SmartDashboard::PutNumber("Shooter Motor 2 Encoder Velocity (~0)", motor_two->GetEncVel());

	SmartDashboard::PutNumber("Shooter Motor 1 Talon Velocity (~-2800)", motor_one->GetSpeed());
	//SmartDashboard::PutNumber("Shooter Motor 2 Talon Velocity (~0)", motor_two->GetSpeed());
}
