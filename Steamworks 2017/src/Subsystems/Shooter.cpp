#include "Shooter.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Shooter::Shooter() : frc::Subsystem("Shooter") {
	initialized = false;
	fly_wheel = 0;
}

void Shooter::InitDefaultCommand() {
	if(!initialized){
		Shooter::InitializeHardware();
	}
}

void Shooter::InitializeHardware(){
	initialized = true;

	fly_wheel = new CANTalon(5);
	fly_wheel->SetFeedbackDevice(CANTalon::CtreMagEncoder_Relative);
	fly_wheel->SetControlMode(frc::CANSpeedController::ControlMode::kSpeed);
	fly_wheel->SetSensorDirection(true);
	fly_wheel->SetVoltageRampRate(8);
	fly_wheel->ConfigNominalOutputVoltage(+0.0f, -0.0f);
	fly_wheel->ConfigPeakOutputVoltage(+0.0f, -12.0f);
	fly_wheel->SetPID(0,0,0,0.05);
}

void Shooter::SpinUpSpinner(float speed){
	if(!initialized){
		Shooter::InitializeHardware();
	}
	fly_wheel->Set(speed);
	//fly_wheel->Set(1);
	SmartDashboard::PutNumber("Shooter Output Voltage (~6.9)", 23456543);
	SmartDashboard::PutNumber("Shooter Encoder Velocity (~2800)", fly_wheel->GetEncVel());
}
