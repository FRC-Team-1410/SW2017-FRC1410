#include "AutonomousShootBlueRotateBack.h"
#include "AutonomousShootBlueRotateBackCommands/AutonomousShootBlueRotateBackHoldDoors.h"
#include "AutonomousShootBlueRotateBackCommands/AutonomousShootBlueRotateBackRotateWheels.h"

AutonomousShootBlueRotateBack::AutonomousShootBlueRotateBack() {
	frc::CommandGroup::AddParallel(new AutonomousShootBlueRotateBackHoldDoors(), 1);
	frc::CommandGroup::AddParallel(new AutonomousShootBlueRotateBackRotateWheels(), 1);
}
