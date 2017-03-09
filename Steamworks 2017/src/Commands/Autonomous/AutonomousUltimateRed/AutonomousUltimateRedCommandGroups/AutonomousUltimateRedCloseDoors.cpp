#include "AutonomousUltimateRedCloseDoors.h"
#include "AutonomousUltimateRedCloseDoorsCommands/AutonomousUltimateRedCloseDoorsRotateHinges.h"

AutonomousUltimateRedCloseDoors::AutonomousUltimateRedCloseDoors() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedCloseDoorsRotateHinges(), 0.1);
}
