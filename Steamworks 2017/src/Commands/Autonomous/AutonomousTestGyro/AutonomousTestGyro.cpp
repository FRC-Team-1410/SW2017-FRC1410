#include "AutonomousTestGyro.h"
#include "AutonomousTestGyroCommandGroups/AutonomousTestGyroDriveStraight.h"

AutonomousTestGyro::AutonomousTestGyro() {
	frc::CommandGroup::AddSequential(new AutonomousTestGyroDriveStraight());
}
