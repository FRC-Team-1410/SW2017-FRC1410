#include "AutonomousUltimateRedRotateLeft.h"
#include "AutonomousUltimateRedRotateLeftCommands/AutonomousUltimateRedRotateLeftHoldDoors.h"
#include "AutonomousUltimateRedRotateLeftCommands/AutonomousUltimateRedRotateLeftSpinShooter.h"
#include "AutonomousUltimateRedRotateLeftCommands/AutonomousUltimateRedRotateLeftRotateWheels.h"

AutonomousUltimateRedRotateLeft::AutonomousUltimateRedRotateLeft() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateLeftHoldDoors());
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateLeftSpinShooter());
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateLeftRotateWheels());
}
