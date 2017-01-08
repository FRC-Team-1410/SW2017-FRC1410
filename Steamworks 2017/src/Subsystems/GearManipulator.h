#ifndef GearManipulator_H
#define GearManipulator_H

#include <Commands/Subsystem.h>

class GearManipulator: public frc::Subsystem {
public:
	GearManipulator();
	void InitDefaultCommand() override;

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
};

#endif  // EXAMPLE_SUBSYSTEM_H
