#include "AutonomousUltimateRedRotateMore.h"
#include "AutonomousUltimateRedRotateMoreCommands/AutonomousUltimateRedRotateMoreHoldDoors.h"
#include "AutonomousUltimateRedRotateMoreCommands/AutonomousUltimateRedRotateMoreRotateWheels.h"

AutonomousUltimateRedRotateMore::AutonomousUltimateRedRotateMore() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateMoreHoldDoors(), 0.5);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateMoreRotateWheels(), 0.5);
}
