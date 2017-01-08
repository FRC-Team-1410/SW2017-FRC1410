#include "DriveBase.h"

#include "../RobotMap.h"
#include "../Commands/TeleOp/TeleOpDriveBase/TeleOpDriveBaseDriveMecanum.h"

DriveBase::DriveBase() : frc::Subsystem("DriveBase") {
	front_left_motor = new CANTalon(1);
	front_right_motor = new CANTalon(2);
	back_left_motor = new CANTalon(3);
	back_right_motor = new CANTalon(4);

	drive = new frc::RobotDrive(1,3,2,4); //front left, back left, front right, back right
}

void DriveBase::InitDefaultCommand() {
	SetDefaultCommand(new TeleOpDriveBaseDriveMecanum());
}

void DriveBase::DriveMecanum(double x_magnitude, double y_magnitude, double rotation_magnitude){
	drive->MecanumDrive_Cartesian(x_magnitude, y_magnitude, rotation_magnitude);
}
