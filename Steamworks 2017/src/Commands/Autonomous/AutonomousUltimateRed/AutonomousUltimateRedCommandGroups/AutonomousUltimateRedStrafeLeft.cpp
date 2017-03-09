#include "AutonomousUltimateRedStrafeLeft.h"
#include "AutonomousUltimateRedStrafeLeftCommands/AutonomousUltimateRedStrafeLeftStrafeWheels.h"
#include "AutonomousUltimateRedStrafeLeftCommands/AutonomousUltimateRedStrafeLeftHoldDoors.h"
#include "AutonomousUltimateRedStrafeLeftCommands/AutonomousUltimateRedStrafeLeftSpinShooter.h"

AutonomousUltimateRedStrafeLeft::AutonomousUltimateRedStrafeLeft() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedStrafeLeftStrafeWheels());
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedStrafeLeftHoldDoors());
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedStrafeLeftSpinShooter());
}
