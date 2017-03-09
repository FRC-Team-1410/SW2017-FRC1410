#include "AutonomousUltimateRedObtainSpeed.h"
#include "AutonomousUltimateRedObtainSpeedCommands/AutonomousUltimateRedObtainSpeedHoldDoors.h"
#include "AutonomousUltimateRedObtainSpeedCommands/AutonomousUltimateRedObtainSpeedSpinShooter.h"

AutonomousUltimateRedObtainSpeed::AutonomousUltimateRedObtainSpeed() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedObtainSpeedHoldDoors(), 1.0);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedObtainSpeedSpinShooter(), 1.0);
}
