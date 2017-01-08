#ifndef OI_H
#define OI_H

#include <WPILib.h>

class OI {
private:
	frc::XboxController * driver_controller;
	frc::XboxController * operator_controller;

public:
	OI();

	double ReturnDriverAxis(int axis);
};

#endif  // OI_H
