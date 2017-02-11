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
<<<<<<< HEAD
	void SpinMotor(float speed);
=======
	void DriveHopperMotor(float speed);
>>>>>>> origin/master

private:
	bool initialized;

<<<<<<< HEAD
	CANTalon * motor;
=======
	CANTalon * hopper_motor;
>>>>>>> origin/master

	void InitializeHardware();
};

#endif  // Intake_H
