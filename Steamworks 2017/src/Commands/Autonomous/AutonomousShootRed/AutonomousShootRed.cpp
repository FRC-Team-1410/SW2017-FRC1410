#include "WPILib.h"
#include "AutonomousShootRed.h"
#include "AutonomousShootRedCommandGroups/AutonomousShootRedStrafeLeft.h"
#include "AutonomousShootRedCommandGroups/AutonomousShootRedRotateLeft.h"
#include "AutonomousShootRedCommandGroups/AutonomousShootRedObtainSpeed.h"
#include "AutonomousShootRedCommandGroups/AutonomousShootRedShootFuel.h"
#include "AutonomousShootRedCommandGroups/AutonomousShootRedDriveBackwards.h"
#include "AutonomousShootRedCommandGroups/AutonomousShootRedRotateBack.h"

AutonomousShootRed::AutonomousShootRed() {
	frc::CommandGroup::AddSequential(new AutonomousShootRedStrafeLeft(), 1);
	frc::CommandGroup::AddSequential(new AutonomousShootRedRotateLeft(), 0.5);
	frc::CommandGroup::AddSequential(new AutonomousShootRedObtainSpeed(), 2);
	frc::CommandGroup::AddSequential(new AutonomousShootRedShootFuel(), 8.5);
	frc::CommandGroup::AddSequential(new AutonomousShootRedRotateBack(), 1);
	frc::CommandGroup::AddSequential(new AutonomousShootRedDriveBackwards(), 2);
}
