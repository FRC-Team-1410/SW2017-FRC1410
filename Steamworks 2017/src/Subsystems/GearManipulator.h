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
	void FlapDoorsToHolderFastly(float magnitude);
	void MoveTopFlap(float magnitude);

private:
	bool initialized;

	frc::DoubleSolenoid * left_solenoid;
	//frc::DoubleSolenoid * right_solenoid;
	frc::Servo * left_servo;
	frc::Servo * right_servo;
	frc::Servo * top_servo;

	void InitializeHardware();
};

#endif  // GearManipulator_H
