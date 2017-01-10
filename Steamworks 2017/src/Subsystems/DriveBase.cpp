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

	drive = new frc::RobotDrive(front_left_motor, back_left_motor, front_right_motor, back_right_motor);

	drive->SetInvertedMotor(drive->kFrontRightMotor, true);
	drive->SetInvertedMotor(drive->kRearRightMotor, true);

	drive->SetSafetyEnabled(false);
	drive->SetSensitivity(0.2);
}

void DriveBase::InitDefaultCommand() {
	SetDefaultCommand(new TeleOpDriveBaseDriveMecanum());
}

void DriveBase::DriveMecanum(double x_magnitude, double y_magnitude, double rotation_magnitude){
	DriveBase::drive->MecanumDrive_Cartesian(x_magnitude, y_magnitude, rotation_magnitude);
}
