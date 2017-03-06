#include "AutonomousShootBlueShootFuel.h"
#include "AutonomousShootBlueShootFuelCommands/AutonomousShootBlueShootFuelHoldDoors.h"
#include "AutonomousShootBlueShootFuelCommands/AutonomousShootBlueShootFuelSpinShooter.h"
#include "AutonomousShootBlueShootFuelCommands/AutonomousShootBlueShootFuelRotateHopper.h"

AutonomousShootBlueShootFuel::AutonomousShootBlueShootFuel() {
	frc::CommandGroup::AddParallel(new AutonomousShootBlueShootFuelHoldDoors(), 8.5);
	frc::CommandGroup::AddParallel(new AutonomousShootBlueShootFuelSpinShooter(), 8.5);
	frc::CommandGroup::AddParallel(new AutonomousShootBlueShootFuelRotateHopper(), 8.5);
}
