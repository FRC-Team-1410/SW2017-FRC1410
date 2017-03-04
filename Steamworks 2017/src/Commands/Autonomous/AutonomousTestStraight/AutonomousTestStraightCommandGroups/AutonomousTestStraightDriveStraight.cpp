#include "AutonomousTestStraightDriveStraight.h"
#include "AutonomousTestStraightDriveStraightCommands/AutonomousTestStraightDriveStraightMoveWheels.h"
#include "AutonomousTestStraightDriveStraightCommands/AutonomousTestStraightDriveStraightRotateHinges.h"

AutonomousTestStraightDriveStraight::AutonomousTestStraightDriveStraight() {
	frc::CommandGroup::AddParallel(new AutonomousTestStraightDriveStraightMoveWheels());
	frc::CommandGroup::AddParallel(new AutonomousTestStraightDriveStraightRotateHinges());
}
