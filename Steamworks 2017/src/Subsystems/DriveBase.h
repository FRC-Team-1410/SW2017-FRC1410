#ifndef DriveBase_H
#define DriveBase_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>
#include <AHRS.h>

class DriveBase: public frc::Subsystem {
public:
	DriveBase();
	void InitDefaultCommand() override;
	void DriveMecanum(double x_magnitude, double y_magnitude, double rotation_magnitude);
	float ReturnEncoderDistance();
	void ResetEncoders();
	void DriveStraight(float left_speed, float right_speed);
	void SwitchToVoltage();
	void SwitchToPercentVbus();

	float ReturnDrivenInches(float radius);
	float ReturnDrivenTicks();

	float ReturnAngle();

	void RotateToAngle(float angle);

	void PutNumbersFromNavXMXP();

	void ResetGyro();

private:
	bool initialized;

	CANTalon * front_left_motor; //CANTalon 1
	CANTalon * front_right_motor; //CANTalon 2
	CANTalon * back_left_motor; //CANTalon 3
	CANTalon * back_right_motor; //CANTalon 4

	//CANTalon * front_left_mini; //CANTalon 11
	//CANTalon * front_right_mini; //CANTalon 12
	//CANTalon * back_left_mini; //CANTalon 13
	//CANTalon * back_right_mini; //CANTalon 14

	frc::RobotDrive * full_drive;
	//frc::RobotDrive * mini_drive;

	AHRS * navigation;

	void InitializeHardware();
};

#endif  // DriveBase_H
