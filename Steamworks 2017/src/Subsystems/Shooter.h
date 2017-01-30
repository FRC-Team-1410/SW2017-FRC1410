#ifndef Shooter_H
#define Shooter_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class Shooter: public frc::Subsystem {
public:
	Shooter();
	void InitDefaultCommand() override;

private:
	bool initialized;

	void InitializeHardware();
};

#endif  // Shooter_H
