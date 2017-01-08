#ifndef ShootingSystem_H
#define ShootingSystem_H

#include <Commands/Subsystem.h>

class ShootingSystem: public frc::Subsystem {
public:
	ShootingSystem();
	void InitDefaultCommand() override;

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
};

#endif  // EXAMPLE_SUBSYSTEM_H
