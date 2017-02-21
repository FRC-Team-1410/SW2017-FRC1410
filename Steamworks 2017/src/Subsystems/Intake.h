#ifndef Intake_H
#define Intake_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class Intake: public frc::Subsystem {
public:
	Intake();
	void InitDefaultCommand() override;
	void DriveIntakeMotor(float speed);

private:
	bool initialized;

	CANTalon * intake_motor_one;
	CANTalon * intake_motor_two;

	void InitializeHardware();
};

#endif  // Intake_H
