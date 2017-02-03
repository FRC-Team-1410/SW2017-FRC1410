#ifndef Hopper_H
#define Hopper_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class Hopper: public frc::Subsystem {
public:
	Hopper();
	void InitDefaultCommand() override;

private:
	bool initialized;

	void InitializeHardware();
};

#endif  // Hopper_H
