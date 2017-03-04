#include "AutonomousShootRedStrafeLeft.h"
#include "AutonomousShootRedStrafeLeftCommands/AutonomousShootRedStrafeLeftStrafeWheels.h"
#include "AutonomousShootRedStrafeLeftCommands/AutonomousShootRedStrafeLeftSpinShooter.h"
#include "AutonomousShootRedStrafeLeftCommands/AutonomousShootRedStrafeLeftHoldDoors.h"

AutonomousShootRedStrafeLeft::AutonomousShootRedStrafeLeft() {
	frc::CommandGroup::AddParallel(new AutonomousShootRedStrafeLeftStrafeWheels(), 0.5);
	frc::CommandGroup::AddParallel(new AutonomousShootRedStrafeLeftSpinShooter(), 0.5);
	frc::CommandGroup::AddParallel(new AutonomousShootRedStrafeLeftHoldDoors(), 0.5);
	SmartDashboard::PutNumber("Part: " , 1);
}
