#ifndef Shooter_H
#define Shooter_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class Shooter: public frc::Subsystem {
public:
	Shooter();
	void InitDefaultCommand() override;
	void SpinUpSpinner(float speed);
	double ReturnShooterSpeed();

private:
	bool initialized;

	void InitializeHardware();

	CANTalon * motor_one;
	CANTalon * motor_two;
};

#endif  // Shooter_H
