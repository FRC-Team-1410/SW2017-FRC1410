#include "AutonomousUltimateRedObtainSpeed.h"
#include "AutonomousUltimateRedObtainSpeedCommands/AutonomousUltimateRedObtainSpeedHoldDoors.h"
#include "AutonomousUltimateRedObtainSpeedCommands/AutonomousUltimateRedObtainSpeedSpinShooter.h"

AutonomousUltimateRedObtainSpeed::AutonomousUltimateRedObtainSpeed() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedObtainSpeedHoldDoors());
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedObtainSpeedSpinShooter());
}
