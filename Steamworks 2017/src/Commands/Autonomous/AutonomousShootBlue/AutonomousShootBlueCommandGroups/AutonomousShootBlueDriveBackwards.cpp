#include "AutonomousShootBlueDriveBackwards.h"
#include "AutonomousShootBlueDriveBackwardsCommands/AutonomousShootBlueDriveBackwardsHoldDoors.h"
#include "AutonomousShootBlueDriveBackwardsCommands/AutonomousShootBlueDriveBackwardsDriveWheels.h"

AutonomousShootBlueDriveBackwards::AutonomousShootBlueDriveBackwards() {
	frc::CommandGroup::AddParallel(new AutonomousShootBlueDriveBackwardsHoldDoors(), 2);
	frc::CommandGroup::AddParallel(new AutonomousShootBlueDriveBackwardsDriveWheels(), 2);
}
