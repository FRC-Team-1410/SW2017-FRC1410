#ifndef OI_H
#define OI_H

#include <WPILib.h>

class OI {
public:
	OI();
	double ReturnDriverAxis(int axis);
	double ReturnOperatorAxis(int axis);
	void InitializeHardware();

private:
	//frc::XboxController * driver_controller;
	//frc::XboxController * operator_controller;
	frc::XboxController * driver_controller;
	frc::XboxController * operator_controller;

	frc::JoystickButton * gear_solenoid_button;
	frc::JoystickButton * shooter_spin_button;
	frc::JoystickButton * intake_obtain_balls;
	frc::JoystickButton * hopper_wash_laundry;
	frc::JoystickButton * gear_servo_flippity_flop;
	frc::JoystickButton * climber_rotate;
	frc::JoystickButton * gear_open_top_flap;
};

#endif  // OI_H
