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
	frc::DoubleSolenoid * left_solenoid;
	//frc::DoubleSolenoid * right_solenoid;
};

#endif  // GearManipulator_H
