#include "AutonomousScoreGearDriveBackward.h"
#include "AutonomousScoreGearDriveBackwardCommands/AutonomousScoreGearDriveBackwardDriveWheels.h"

AutonomousScoreGearDriveBackward::AutonomousScoreGearDriveBackward() {
	frc::CommandGroup::AddParallel(new AutonomousScoreGearDriveBackwardDriveWheels(), 2.5);
}
