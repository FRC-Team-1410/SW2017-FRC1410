#include "AutonomousShootRedShootFuel.h"
#include "AutonomousShootRedShootFuelCommands/AutonomousShootRedShootFuelHoldDoors.h"
#include "AutonomousShootRedShootFuelCommands/AutonomousShootRedShootFuelSpinShooter.h"
#include "AutonomousShootRedShootFuelCommands/AutonomousShootRedShootFuelRotateHopper.h"

AutonomousShootRedShootFuel::AutonomousShootRedShootFuel() {
	frc::CommandGroup::AddParallel(new AutonomousShootRedShootFuelHoldDoors(), 8.5);
	frc::CommandGroup::AddParallel(new AutonomousShootRedShootFuelSpinShooter(), 8.5);
	frc::CommandGroup::AddParallel(new AutonomousShootRedShootFuelRotateHopper(), 8.5);
	SmartDashboard::PutNumber("Part: " , 4);
}
