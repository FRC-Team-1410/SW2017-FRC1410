#ifndef Climber_H
#define Climber_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class Climber: public frc::Subsystem {
public:
	Climber();
	void InitDefaultCommand() override;
	void RotateZeDrum(float speed);

private:
	bool initialized;
	CANTalon * motor_one;
	CANTalon * motor_two;

	void InitializeHardware();
};

#endif  // Climber_H
