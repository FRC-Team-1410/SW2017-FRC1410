#include "DriveBase.h"
#include <CANTalon.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Commands/TeleOp/TeleOpDriveBase/TeleOpDriveBaseDriveMecanum.h"

DriveBase::DriveBase() : frc::Subsystem("DriveBase") {
	front_left_motor = new CANTalon(1);
	front_right_motor = new CANTalon(2);
	back_left_motor = new CANTalon(3);
	back_right_motor = new CANTalon(4);

	front_left_mini = new CANTalon(11);
	front_right_mini = new CANTalon(12);
	back_left_mini = new CANTalon(13);
	back_right_mini = new CANTalon(14);

	full_drive = new frc::RobotDrive(front_left_motor, back_left_motor, front_right_motor, back_right_motor);

	mini_drive = new frc::RobotDrive(front_left_mini, back_left_mini, front_right_mini, back_left_mini);

	full_drive->SetInvertedMotor(full_drive->kFrontRightMotor, true);
	full_drive->SetInvertedMotor(full_drive->kRearLeftMotor, true);
	full_drive->SetInvertedMotor(full_drive->kRearRightMotor, true);

	mini_drive->SetInvertedMotor(mini_drive->kFrontRightMotor, true);
	mini_drive->SetInvertedMotor(mini_drive->kRearLeftMotor, true);
	mini_drive->SetInvertedMotor(mini_drive->kRearRightMotor, true);

	full_drive->SetSafetyEnabled(false);
	full_drive->SetSensitivity(0.2);

	mini_drive->SetSafetyEnabled(false);
	mini_drive->SetSensitivity(0.2);
}

void DriveBase::InitDefaultCommand() {
	SetDefaultCommand(new TeleOpDriveBaseDriveMecanum());
}

void DriveBase::DriveMecanum(double x_magnitude, double y_magnitude, double rotation_magnitude){
	DriveBase::full_drive->MecanumDrive_Cartesian(x_magnitude, y_magnitude, rotation_magnitude);
	DriveBase::mini_drive->MecanumDrive_Cartesian(x_magnitude, y_magnitude, rotation_magnitude);
}
