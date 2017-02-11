#ifndef Agitate_H
#define Agitate_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class Agitate: public frc::Subsystem
{
public:
	Agitate();
	void InitDefaultCommand() override;
	void DriveHopperMotor(float speed);

private:
	bool initialized;

	CANTalon * hopper_motor;

	void InitializeHardware();
};

#endif  // Intake_H
