#include "AutonomousUltimateRedStrafeLeft.h"
#include "AutonomousUltimateRedStrafeLeftCommands/AutonomousUltimateRedStrafeLeftStrafeWheels.h"
#include "AutonomousUltimateRedStrafeLeftCommands/AutonomousUltimateRedStrafeLeftHoldDoors.h"
#include "AutonomousUltimateRedStrafeLeftCommands/AutonomousUltimateRedStrafeLeftSpinShooter.h"

AutonomousUltimateRedStrafeLeft::AutonomousUltimateRedStrafeLeft() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedStrafeLeftStrafeWheels(), 0.7);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedStrafeLeftHoldDoors(), 0.7);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedStrafeLeftSpinShooter(), 0.7);
}
