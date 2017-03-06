#include "AutonomousShootRedRotateLeft.h"
#include "AutonomousShootRedRotateLeftCommands/AutonomousShootRedRotateLeftHoldDoors.h"
#include "AutonomousShootRedRotateLeftCommands/AutonomousShootRedRotateLeftSpinShooter.h"
#include "AutonomousShootRedRotateLeftCommands/AutonomousShootRedRotateLeftRotateWheels.h"

AutonomousShootRedRotateLeft::AutonomousShootRedRotateLeft() {
	frc::CommandGroup::AddParallel(new AutonomousShootRedRotateLeftHoldDoors(), 0.5);
	frc::CommandGroup::AddParallel(new AutonomousShootRedRotateLeftSpinShooter(), 0.5);
	frc::CommandGroup::AddParallel(new AutonomousShootRedRotateLeftRotateWheels(), 0.5);
}
