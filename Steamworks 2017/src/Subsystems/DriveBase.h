#ifndef DriveBase_H
#define DriveBase_H

#include <Commands/Subsystem.h>
#include <WPILib.h>
#include <CANTalon.h>

class DriveBase: public frc::Subsystem {
public:
	DriveBase();
	void InitDefaultCommand() override;

	void DriveMecanum(double x_magnitude, double y_magnitude, double rotation_magnitude);

private:
	CANTalon * front_left_motor;
	CANTalon * front_right_motor;
	CANTalon * back_left_motor;
	CANTalon * back_right_motor;

	frc::RobotDrive * drive;
};

#endif  // DriveBase_H
