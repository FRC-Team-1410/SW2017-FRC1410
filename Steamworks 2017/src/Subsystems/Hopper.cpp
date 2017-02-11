#include "Hopper.h"
#include <CANTalon.h>
#include <Commands/TeleOp/TeleOpHopper/TeleOpHopperAgitateBalls.h>
#include <WPILib.h>
#include "../RobotMap.h"
#include "../Robot.h"

Agitate::Agitate() : frc::Subsystem("Agitate")
{
	initialized = false;
<<<<<<< HEAD

	motor = false;
=======
	hopper_motor = 0;
>>>>>>> origin/master
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

<<<<<<< HEAD
	motor = new CANTalon(11);
}

void Hopper::SpinMotor(float speed){
	if(!initialized){
		Hopper::InitializeHardware();
	}
	motor->Set(speed);
=======
	hopper_motor = new CANTalon(9);
}

void Agitate::DriveHopperMotor(float speed)
{
	hopper_motor->Set(speed);
>>>>>>> origin/master
}
