#include "AutonomousScoreGearOpenDoors.h"
#include "AutonomousScoreGearOpenDoorsCommands/AutonomousScoreGearOpenDoorsRotateHinges.h"

AutonomousScoreGearOpenDoors::AutonomousScoreGearOpenDoors() {
	frc::CommandGroup::AddParallel(new AutonomousScoreGearOpenDoorsRotateHinges(), 0.5);
}
