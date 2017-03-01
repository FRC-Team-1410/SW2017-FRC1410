#include "AutonomousTestShootObtainSpeed.h"
#include "AutonomousTestShootObtainSpeedCommands/AutoTestShootObtainSpeedSpinUp.h"

AutonomousTestShootObtainSpeed::AutonomousTestShootObtainSpeed() {
	frc::CommandGroup::AddParallel(new AutoTestShootObtainSpeedSpinUp());
}
