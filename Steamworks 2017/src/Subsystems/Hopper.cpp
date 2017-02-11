#include "Hopper.h"
#include <CANTalon.h>
#include <Commands/TeleOp/TeleOpHopper/TeleOpHopperAgitateBalls.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Agitate::Agitate() : frc::Subsystem("Agitate")
{
	initialized = false;
	hopper_motor = 0;
}

void Agitate::InitDefaultCommand()
{
	if(!initialized)
	{
		Agitate::InitializeHardware();
	}
	//SetDefaultCommand(new TeleOpIntakeObtainBalls());
}

void Agitate::InitializeHardware()
{
	initialized = true;

	hopper_motor = new CANTalon(9);
}

void Agitate::DriveHopperMotor(float speed)
{
	hopper_motor->Set(speed);
}
