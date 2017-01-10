#ifndef OI_H
#define OI_H

#include <WPILib.h>

class OI {
public:
	OI();
	double ReturnDriverAxis(int axis);

private:
	frc::XboxController * driver_controller;
	frc::XboxController * operator_controller;
};

#endif  // OI_H
