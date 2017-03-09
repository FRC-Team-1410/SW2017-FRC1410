#include "AutonomousUltimateRedOpenDoors.h"
#include "AutonomousUltimateRedOpenDoorsCommands/AutonomousUltimateRedOpenDoorsRotateHinges.h"

AutonomousUltimateRedOpenDoors::AutonomousUltimateRedOpenDoors() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedOpenDoorsRotateHinges(), 0.1);
}
