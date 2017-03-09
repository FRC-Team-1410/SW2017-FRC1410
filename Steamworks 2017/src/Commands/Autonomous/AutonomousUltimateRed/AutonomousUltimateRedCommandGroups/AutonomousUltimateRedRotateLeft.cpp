#include "AutonomousUltimateRedRotateLeft.h"
#include "AutonomousUltimateRedRotateLeftCommands/AutonomousUltimateRedRotateLeftHoldDoors.h"
#include "AutonomousUltimateRedRotateLeftCommands/AutonomousUltimateRedRotateLeftSpinShooter.h"
#include "AutonomousUltimateRedRotateLeftCommands/AutonomousUltimateRedRotateLeftRotateWheels.h"

AutonomousUltimateRedRotateLeft::AutonomousUltimateRedRotateLeft() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateLeftHoldDoors(), 0.2);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateLeftSpinShooter(), 0.2);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateLeftRotateWheels(), 0.2);
}
