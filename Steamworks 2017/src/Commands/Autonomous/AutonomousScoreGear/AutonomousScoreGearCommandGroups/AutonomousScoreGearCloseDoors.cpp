#include "AutonomousScoreGearCloseDoors.h"
#include "AutonomousScoreGearCloseDoorsCommands/AutonomousScoreGearCloseDoorsRotateHinges.h"

AutonomousScoreGearCloseDoors::AutonomousScoreGearCloseDoors() {
	frc::CommandGroup::AddParallel(new AutonomousScoreGearCloseDoorsRotateHinges(), 0.5);
}
