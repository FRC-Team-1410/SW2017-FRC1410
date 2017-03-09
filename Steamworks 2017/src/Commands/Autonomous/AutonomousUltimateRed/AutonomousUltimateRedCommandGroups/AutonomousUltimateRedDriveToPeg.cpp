#include "AutonomousUltimateRedDriveToPeg.h"
#include "AutonomousUltimateRedDriveToPegCommands/AutonomousUltimateRedDriveToPegHoldDoors.h"
#include "AutonomousUltimateRedDriveToPegCommands/AutonomousUltimateRedDriveToPegDriveWheels.h"

AutonomousUltimateRedDriveToPeg::AutonomousUltimateRedDriveToPeg() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedDriveToPegHoldDoors(), 3.5);
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedDriveToPegDriveWheels(), 3.5);
}
