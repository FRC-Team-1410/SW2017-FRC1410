#include "DriveBase.h"
#include <CANTalon.h>
#include <Commands/TeleOp/TeleOpDriveBase/TeleOpDriveBaseDriveMecanum.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

DriveBase::DriveBase() : frc::Subsystem("DriveBase") {
	initialized = false;

	front_left_motor = 0;
	front_right_motor = 0;
	back_left_motor = 0;
	back_right_motor = 0;

	front_left_mini = 0;
	front_right_mini = 0;
	back_left_mini = 0;
	back_right_mini = 0;

	full_drive = 0;
	mini_drive = 0;
}

void DriveBase::InitDefaultCommand() {
	if(!initialized){
		DriveBase::InitializeHardware();
	}
	SetDefaultCommand(new TeleOpDriveBaseDriveMecanum());
}

void DriveBase::InitializeHardware(){
	initialized = true;

	front_left_motor = new CANTalon(1);
	front_right_motor = new CANTalon(2);
	back_left_motor = new CANTalon(3);
	back_right_motor = new CANTalon(4);

	front_left_mini = new CANTalon(11);
	front_right_mini = new CANTalon(12);
	back_left_mini = new CANTalon(13);
	back_right_mini = new CANTalon(14);

	full_drive = new frc::RobotDrive(front_left_motor, back_left_motor, front_right_motor, back_right_motor);

	mini_drive = new frc::RobotDrive(front_left_mini, back_left_mini, front_right_mini, back_right_mini);

	//full_drive->SetInvertedMotor(full_drive->kFrontLeftMotor, true);
	//full_drive->SetInvertedMotor(full_drive->kFrontRightMotor, true);
	full_drive->SetInvertedMotor(full_drive->kRearLeftMotor, true);
	full_drive->SetInvertedMotor(full_drive->kRearRightMotor, true);

	//mini_drive->SetInvertedMotor(mini_drive->kFrontLeftMotor, true);
	//mini_drive->SetInvertedMotor(mini_drive->kFrontRightMotor, true);
	mini_drive->SetInvertedMotor(mini_drive->kRearLeftMotor, true);
	mini_drive->SetInvertedMotor(mini_drive->kRearRightMotor, true);

	full_drive->SetSafetyEnabled(false);
	full_drive->SetSensitivity(0.2);

	mini_drive->SetSafetyEnabled(false);
	mini_drive->SetSensitivity(0.2);

	front_left_motor->SetFeedbackDevice(CANTalon::QuadEncoder);
	front_right_motor->SetFeedbackDevice(CANTalon::QuadEncoder);

}

void DriveBase::DriveMecanum(double x_magnitude, double y_magnitude, double rotation_magnitude){
	if(!initialized){
		DriveBase::InitializeHardware();
	}

	DriveBase::full_drive->MecanumDrive_Cartesian(x_magnitude, y_magnitude, rotation_magnitude);
	DriveBase::mini_drive->MecanumDrive_Cartesian(x_magnitude, y_magnitude, rotation_magnitude);
}

float DriveBase::ReturnEncoderDistance(){
	if(!initialized){
		DriveBase::InitializeHardware();
	}

	float left_encoder = DriveBase::front_left_motor->GetEncPosition();
	float right_encoder = DriveBase::front_right_motor->GetEncPosition();

	float average;
	average = left_encoder + right_encoder;
	average /= 2;

	return average;
}

void DriveBase::ResetEncoders(){
	if(!initialized){
		DriveBase::InitializeHardware();
	}

	front_left_motor->SetEncPosition(0);
	front_right_motor->SetEncPosition(0);
}
