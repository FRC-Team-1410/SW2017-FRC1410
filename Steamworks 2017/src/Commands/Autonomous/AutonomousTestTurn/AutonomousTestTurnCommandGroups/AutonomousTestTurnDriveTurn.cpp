#include "AutonomousTestTurnDriveTurn.h"
#include "AutonomousTestTurnDriveTurnCommands/AutonomousTestTurnDriveTurnMoveWheels.h"

AutonomousTestTurnDriveTurn::AutonomousTestTurnDriveTurn() {
	frc::CommandGroup::AddParallel(new AutonomousTestTurnDriveTurnMoveWheels(), 5);
}
