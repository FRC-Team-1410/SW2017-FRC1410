#include "AutonomousUltimateRedRotateMore.h"
#include "AutonomousUltimateRedRotateMoreCommands/AutonomousUltimateRedRotateMoreHoldDoors.h"
#include "AutonomousUltimateRedRotateMoreCommands/AutonomousUltimateRedRotateMoreRotateWheels.h"

AutonomousUltimateRedRotateMore::AutonomousUltimateRedRotateMore() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateMoreHoldDoors());
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateMoreRotateWheels());
}
