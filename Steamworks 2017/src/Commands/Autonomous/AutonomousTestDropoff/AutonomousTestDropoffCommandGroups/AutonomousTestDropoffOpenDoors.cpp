#include "AutonomousTestDropoffOpenDoors.h"
#include "AutonomousTestDropoffOpenDoorsCommands/AutonomousTestDropoffOpenDoorsRotateHinges.h"

AutonomousTestDropoffOpenDoors::AutonomousTestDropoffOpenDoors() {
	frc::CommandGroup::AddParallel(new AutonomousTestDropoffOpenDoorsRotateHinges());
}
