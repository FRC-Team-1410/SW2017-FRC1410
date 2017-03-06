#include "AutonomousShootRedStrafeLeft.h"
#include "AutonomousShootRedStrafeLeftCommands/AutonomousShootRedStrafeLeftStrafeWheels.h"
#include "AutonomousShootRedStrafeLeftCommands/AutonomousShootRedStrafeLeftSpinShooter.h"
#include "AutonomousShootRedStrafeLeftCommands/AutonomousShootRedStrafeLeftHoldDoors.h"

AutonomousShootRedStrafeLeft::AutonomousShootRedStrafeLeft() {
	frc::CommandGroup::AddParallel(new AutonomousShootRedStrafeLeftStrafeWheels(), 1);
	frc::CommandGroup::AddParallel(new AutonomousShootRedStrafeLeftSpinShooter(), 1);
	frc::CommandGroup::AddParallel(new AutonomousShootRedStrafeLeftHoldDoors(), 1);
}
