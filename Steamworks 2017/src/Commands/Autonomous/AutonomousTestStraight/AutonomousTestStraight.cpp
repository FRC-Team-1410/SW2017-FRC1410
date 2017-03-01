#include "AutonomousTestStraight.h"
#include "AutonomousTestStraightCommandGroups/AutonomousTestStraightDriveStraight.h"

AutonomousTestStraight::AutonomousTestStraight() {
	frc::CommandGroup::AddSequential(new AutonomousTestStraightDriveStraight());
}
