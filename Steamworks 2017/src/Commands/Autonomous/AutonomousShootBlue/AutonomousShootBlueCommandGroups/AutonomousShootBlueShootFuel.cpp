#include "AutonomousShootBlueShootFuel.h"
#include "AutonomousShootBlueShootFuelCommands/AutonomousShootBlueShootFuelHoldDoors.h"
#include "AutonomousShootBlueShootFuelCommands/AutonomousShootBlueShootFuelSpinShooter.h"
#include "AutonomousShootBlueShootFuelCommands/AutonomousShootBlueShootFuelRotateHopper.h"

AutonomousShootBlueShootFuel::AutonomousShootBlueShootFuel() {
	frc::CommandGroup::AddParallel(new AutonomousShootBlueShootFuelHoldDoors(), 6.5);
	frc::CommandGroup::AddParallel(new AutonomousShootBlueShootFuelSpinShooter(), 6.5);
	frc::CommandGroup::AddParallel(new AutonomousShootBlueShootFuelRotateHopper(), 6.5);
}
