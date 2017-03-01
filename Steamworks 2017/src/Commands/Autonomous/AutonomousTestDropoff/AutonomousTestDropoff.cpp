#include "AutonomousTestDropoff.h"
#include "AutonomousTestDropoffCommandGroups/AutonomousTestDropoffOpenDoors.h"

AutonomousTestDropoff::AutonomousTestDropoff() {
	frc::CommandGroup::AddSequential(new AutonomousTestDropoffOpenDoors());
}
