#include "AutonomousScoreGear.h"
#include "AutonomousScoreGearCommandGroups/AutonomousScoreGearDriveForward.h"
#include "AutonomousScoreGearCommandGroups/AutonomousScoreGearOpenDoors.h"
#include "AutonomousScoreGearCommandGroups/AutonomousScoreGearDriveBackward.h"
#include "AutonomousScoreGearCommandGroups/AutonomousScoreGearCloseDoors.h"

AutonomousScoreGear::AutonomousScoreGear() {
	frc::CommandGroup::AddSequential(new AutonomousScoreGearDriveForward(), 5);
	frc::CommandGroup::AddSequential(new AutonomousScoreGearOpenDoors(), 0.5);
	frc::CommandGroup::AddSequential(new AutonomousScoreGearDriveBackward(), 2.5);
	frc::CommandGroup::AddSequential(new AutonomousScoreGearCloseDoors(), 0.5);
}
