#include "AutonomousUltimateRedShootFuel.h"
#include "AutonomousUltimateRedShootFuelCommands/AutonomousUltimateRedShootFuelHoldDoors.h"
#include "AutonomousUltimateRedShootFuelCommands/AutonomousUltimateRedShootFuelSpinShooter.h"
#include "AutonomousUltimateRedShootFuelCommands/AutonomousUltimateRedShootFuelRotateHopper.h"

AutonomousUltimateRedShootFuel::AutonomousUltimateRedShootFuel() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedShootFuelHoldDoors(), 6.0);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedShootFuelSpinShooter(), 6.0);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedShootFuelRotateHopper(), 6.0);
}
