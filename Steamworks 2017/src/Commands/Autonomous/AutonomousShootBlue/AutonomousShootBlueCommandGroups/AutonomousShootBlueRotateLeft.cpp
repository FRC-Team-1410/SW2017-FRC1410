#include "AutonomousShootBlueRotateLeft.h"
#include "AutonomousShootBlueRotateLeftCommands/AutonomousShootBlueRotateLeftHoldDoors.h"
#include "AutonomousShootBlueRotateLeftCommands/AutonomousShootBlueRotateLeftSpinShooter.h"
#include "AutonomousShootBlueRotateLeftCommands/AutonomousShootBlueRotateLeftRotateWheels.h"

AutonomousShootBlueRotateLeft::AutonomousShootBlueRotateLeft() {
	frc::CommandGroup::AddParallel(new AutonomousShootBlueRotateLeftHoldDoors(), 0.5);
	frc::CommandGroup::AddParallel(new AutonomousShootBlueRotateLeftSpinShooter(), 0.5);
	frc::CommandGroup::AddParallel(new AutonomousShootBlueRotateLeftRotateWheels(), 0.5);
}
