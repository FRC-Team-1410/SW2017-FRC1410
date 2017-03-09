#include "AutonomousUltimateRedRotateToPeg.h"
#include "AutonomousUltimateRedRotateToPegCommands/AutonomousUltimateRedRotateToPegHoldDoors.h"
#include "AutonomousUltimateRedRotateToPegCommands/AutonomousUltimateRedRotateToPegRotateWheels.h"

AutonomousUltimateRedRotateToPeg::AutonomousUltimateRedRotateToPeg() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateToPegHoldDoors(), 1.0);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedRotateToPegRotateWheels(), 1.0);
}
