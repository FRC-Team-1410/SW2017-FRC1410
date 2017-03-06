#include "AutonomousShootRedDriveBackwards.h"
#include "AutonomousShootRedDriveBackwardsCommands/AutonomousShootRedDriveBackwardsHoldDoors.h"
#include "AutonomousShootRedDriveBackwardsCommands/AutonomousShootRedDriveBackwardsDriveWheels.h"

AutonomousShootRedDriveBackwards::AutonomousShootRedDriveBackwards() {
	frc::CommandGroup::AddParallel(new AutonomousShootRedDriveBackwardsHoldDoors(), 3.5);
	frc::CommandGroup::AddParallel(new AutonomousShootRedDriveBackwardsDriveWheels(), 3.5);
	SmartDashboard::PutNumber("Part: " , 5);
}
