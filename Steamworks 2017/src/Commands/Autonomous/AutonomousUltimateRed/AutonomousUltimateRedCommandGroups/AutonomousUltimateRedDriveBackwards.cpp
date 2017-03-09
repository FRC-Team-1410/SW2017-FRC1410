#include "AutonomousUltimateRedDriveBackwards.h"
#include "AutonomousUltimateRedDriveBackwardsCommands/AutonomousUltimateRedDriveBackwardsHoldDoors.h"
#include "AutonomousUltimateRedDriveBackwardsCommands/AutonomousUltimateRedDriveBackwardsDriveWheels.h"

AutonomousUltimateRedDriveBackwards::AutonomousUltimateRedDriveBackwards() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedDriveBackwardsHoldDoors(), 1.2);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedDriveBackwardsDriveWheels(), 1.2);
}
