#include "AutonomousTestShootFireFuel.h"
#include "AutonomousTestShootFireFuelCommands/AutonomousTestShootFireFuelMaintainSpeed.h"
#include "AutonomousTestShootFireFuelCommands/AutonomousTestShootFireFuelRotateHopper.h"

AutonomousTestShootFireFuel::AutonomousTestShootFireFuel() {
	frc::CommandGroup::AddParallel(new AutonomousTestShootFireFuelMaintainSpeed());
	frc::CommandGroup::AddParallel(new AutonomousTestShootFireFuelRotateHopper());
}
