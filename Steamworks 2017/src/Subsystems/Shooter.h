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

private:
	bool initialized;

	void InitializeHardware();

	CANTalon * fly_wheel;
};

#endif  // Shooter_H
