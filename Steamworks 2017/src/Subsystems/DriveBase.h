#ifndef DriveBase_H
#define DriveBase_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class DriveBase: public frc::Subsystem {
public:
	DriveBase();
	void InitDefaultCommand() override;
	void DriveMecanum(double x_magnitude, double y_magnitude, double rotation_magnitude);

private:
	CANTalon * front_left_motor; //CANTalon 1
	CANTalon * front_right_motor; //CANTalon 2
	CANTalon * back_left_motor; //CANTalon 3
	CANTalon * back_right_motor; //CANTalon 4

	frc::RobotDrive * drive;
};

#endif  // DriveBase_H
