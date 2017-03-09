#include <Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRedCommandGroups/AutonomousUltimateRedDriveBackwards.h>
#include "AutonomousShootRedDriveBackwardsCommands/AutonomousShootRedDriveBackwardsHoldDoors.h"
#include "AutonomousShootRedDriveBackwardsCommands/AutonomousShootRedDriveBackwardsDriveWheels.h"

AutonomousShootRedDriveBackwards::AutonomousShootRedDriveBackwards() {
	frc::CommandGroup::AddParallel(new AutonomousShootRedDriveBackwardsHoldDoors(), 2);
	frc::CommandGroup::AddParallel(new AutonomousShootRedDriveBackwardsDriveWheels(), 2);
}
