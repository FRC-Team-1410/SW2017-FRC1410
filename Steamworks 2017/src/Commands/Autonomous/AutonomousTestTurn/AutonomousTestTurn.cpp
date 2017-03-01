#include "AutonomousTestTurn.h"
#include "AutonomousTestTurnCommandGroups/AutonomousTestTurnDriveTurn.h"

AutonomousTestTurn::AutonomousTestTurn() {
	frc::CommandGroup::AddSequential(new AutonomousTestTurnDriveTurn());
}
