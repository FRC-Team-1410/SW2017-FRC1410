#include "AutonomousTestGyroDriveStraight.h"
#include "AutonomousTestGyroDriveStraightCommands/AutonomousTestGyroDriveStraightMoveWheels.h"

AutonomousTestGyroDriveStraight::AutonomousTestGyroDriveStraight() {
	frc::CommandGroup::AddParallel(new AutonomousTestGyroDriveStraightMoveWheels());
}
