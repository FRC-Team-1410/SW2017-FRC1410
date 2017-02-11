#ifndef Hopper_H
#define Hopper_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class Hopper: public frc::Subsystem{
public:
	Hopper();
	void InitDefaultCommand() override;
	void SpinMotor(float speed);

private:
	bool initialized;

	CANTalon * motor;

	void InitializeHardware();
};

#endif  // Hopper_H
