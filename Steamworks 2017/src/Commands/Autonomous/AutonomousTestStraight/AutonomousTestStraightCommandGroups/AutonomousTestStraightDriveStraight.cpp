#include "AutonomousTestStraightDriveStraight.h"
#include "AutonomousTestStraightDriveStraightCommands/AutonomousTestStraightDriveStraightMoveWheels.h"

AutonomousTestStraightDriveStraight::AutonomousTestStraightDriveStraight() {
	frc::CommandGroup::AddParallel(new AutonomousTestStraightDriveStraightMoveWheels());
}
