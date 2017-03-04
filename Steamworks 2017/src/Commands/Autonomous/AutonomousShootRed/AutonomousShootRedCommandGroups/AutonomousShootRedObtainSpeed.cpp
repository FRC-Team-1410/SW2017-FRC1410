#include "AutonomousShootRedObtainSpeed.h"
#include "AutonomousShootRedObtainSpeedCommands/AutonomousShootRedObtainSpeedHoldDoors.h"
#include "AutonomousShootRedObtainSpeedCommands/AutonomousShootRedObtainSpeedSpinShooter.h"

AutonomousShootRedObtainSpeed::AutonomousShootRedObtainSpeed() {
	frc::CommandGroup::AddParallel(new AutonomousShootRedObtainSpeedHoldDoors(), 2);
	frc::CommandGroup::AddParallel(new AutonomousShootRedObtainSpeedSpinShooter(), 2);
	SmartDashboard::PutNumber("Part: " , 3);
}
