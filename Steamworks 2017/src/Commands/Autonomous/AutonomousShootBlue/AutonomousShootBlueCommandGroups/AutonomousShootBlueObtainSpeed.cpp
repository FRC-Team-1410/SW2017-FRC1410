#include "AutonomousShootBlueObtainSpeed.h"
#include "AutonomousShootBlueObtainSpeedCommands/AutonomousShootBlueObtainSpeedHoldDoors.h"
#include "AutonomousShootBlueObtainSpeedCommands/AutonomousShootBlueObtainSpeedSpinShooter.h"

AutonomousShootBlueObtainSpeed::AutonomousShootBlueObtainSpeed() {
	frc::CommandGroup::AddParallel(new AutonomousShootBlueObtainSpeedHoldDoors(), 2.5);
	frc::CommandGroup::AddParallel(new AutonomousShootBlueObtainSpeedSpinShooter(), 2.5);
}
