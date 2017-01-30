#ifndef Climber_H
#define Climber_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class Climber: public frc::Subsystem {
public:
	Climber();
	void InitDefaultCommand() override;

private:
	bool initialized;

	void InitializeHardware();
};

#endif  // Climber_H
