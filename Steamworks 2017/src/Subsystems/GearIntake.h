#ifndef GearIntake_H
#define GearIntake_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class GearIntake: public frc::Subsystem {
public:
	GearIntake();
	void InitDefaultCommand() override;
	void DriveRotationMotor(float speed);
	void DriveWheelsMotor(float speed);
	bool ReturnGearPresent();

private:
	bool initialized;

	CANTalon * intake_rotation_motor;
	CANTalon * intake_wheels_motor;

	frc::DigitalInput * gear_indicator;

	void InitializeHardware();
};

#endif  // GearIntake_H
