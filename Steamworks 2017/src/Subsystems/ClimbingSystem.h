#ifndef ClimbingSystem_H
#define ClimbingSystem_H

#include <Commands/Subsystem.h>

class ClimbingSystem: public frc::Subsystem {
public:
	ClimbingSystem();
	void InitDefaultCommand() override;

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
};

#endif  // EXAMPLE_SUBSYSTEM_H
