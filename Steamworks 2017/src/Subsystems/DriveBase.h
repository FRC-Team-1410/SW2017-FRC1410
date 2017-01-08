#ifndef DriveBase_H
#define DriveBase_H

#include <Commands/Subsystem.h>

class DriveBase: public frc::Subsystem {
public:
	DriveBase();
	void InitDefaultCommand() override;

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
};

#endif  // EXAMPLE_SUBSYSTEM_H
