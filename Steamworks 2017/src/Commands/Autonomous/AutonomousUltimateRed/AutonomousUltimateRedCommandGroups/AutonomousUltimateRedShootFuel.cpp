#include "AutonomousUltimateRedShootFuel.h"
#include "AutonomousUltimateRedShootFuelCommands/AutonomousUltimateRedShootFuelHoldDoors.h"
#include "AutonomousUltimateRedShootFuelCommands/AutonomousUltimateRedShootFuelSpinShooter.h"
#include "AutonomousUltimateRedShootFuelCommands/AutonomousUltimateRedShootFuelRotateHopper.h"

AutonomousUltimateRedShootFuel::AutonomousUltimateRedShootFuel() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedShootFuelHoldDoors());
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedShootFuelSpinShooter());
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedShootFuelRotateHopper());
}
