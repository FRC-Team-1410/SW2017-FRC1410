#ifndef OI_H
#define OI_H

#include <WPILib.h>

class OI {
public:
	OI();
	double ReturnDriverAxis(int axis);

private:
	//frc::XboxController * driver_controller;
	//frc::XboxController * operator_controller;
	frc::Joystick * driver_controller;
	frc::Joystick * operator_controller;

	frc::JoystickButton * gear_solenoid_button;
};

#endif  // OI_H
