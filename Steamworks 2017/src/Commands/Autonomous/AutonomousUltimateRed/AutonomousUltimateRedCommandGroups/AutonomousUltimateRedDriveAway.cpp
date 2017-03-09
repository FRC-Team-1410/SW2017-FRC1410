#include "AutonomousUltimateRedDriveAway.h"
#include "AutonomousUltimateRedDriveAwayCommands/AutonomousUltimateRedDriveAwayDriveWheels.h"

AutonomousUltimateRedDriveAway::AutonomousUltimateRedDriveAway() {
	frc::CommandGroup::AddParallel(new AutonomousUltimateRedDriveAwayDriveWheels(), 0.5);
}
