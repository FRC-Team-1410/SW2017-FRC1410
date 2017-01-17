#ifndef GearManipulator_H
#define GearManipulator_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <WPILib.h>

class GearManipulator: public frc::Subsystem {
public:
	GearManipulator();
	void InitDefaultCommand() override;
	void ActuateSolenoids(bool forward);

private:
	bool initialized;

	frc::DoubleSolenoid * left_solenoid;
	//frc::DoubleSolenoid * right_solenoid;

	void InitializeHardware();
};

#endif  // GearManipulator_H
