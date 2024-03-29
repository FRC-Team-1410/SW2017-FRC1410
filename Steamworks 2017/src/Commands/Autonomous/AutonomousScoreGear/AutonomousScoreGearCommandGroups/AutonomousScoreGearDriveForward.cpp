#include "AutonomousScoreGearDriveForward.h"
#include "AutonomousScoreGearDriveForwardCommands/AutonomousScoreGearDriveForwardDriveWheels.h"
#include "AutonomousScoreGearDriveForwardCommands/AutonomousScoreGearDriveForwardHoldDoors.h"

AutonomousScoreGearDriveForward::AutonomousScoreGearDriveForward() {
	frc::CommandGroup::AddParallel(new AutonomousScoreGearDriveForwardDriveWheels(), 3.75);
	frc::CommandGroup::AddParallel(new AutonomousScoreGearDriveForwardHoldDoors(), 3.75);
}
