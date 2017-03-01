#include "AutonomousTestShoot.h"
#include "AutonomousTestShootCommandGroups/AutonomousTestShootObtainSpeed.h"
#include "AutonomousTestShootCommandGroups/AutonomousTestShootFireFuel.h"

AutonomousTestShoot::AutonomousTestShoot() {
	frc::CommandGroup::AddSequential(new AutonomousTestShootObtainSpeed());
	frc::CommandGroup::AddSequential(new AutonomousTestShootFireFuel());
}
