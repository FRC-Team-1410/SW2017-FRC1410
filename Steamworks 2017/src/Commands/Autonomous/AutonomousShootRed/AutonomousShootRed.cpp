#include "WPILib.h"
#include "AutonomousShootRed.h"
#include "AutonomousShootRedCommandGroups/AutonomousShootRedStrafeLeft.h"
#include "AutonomousShootRedCommandGroups/AutonomousShootRedRotateLeft.h"
#include "AutonomousShootRedCommandGroups/AutonomousShootRedShootFuel.h"

AutonomousShootRed::AutonomousShootRed() {
	frc::CommandGroup::AddSequential(new AutonomousShootRedStrafeLeft(), 0.5);
	frc::CommandGroup::AddSequential(new AutonomousShootRedRotateLeft(), 0.5);
	//ObtainSpeed timeout: 2 seconds
	frc::CommandGroup::AddSequential(new AutonomousShootRedShootFuel(), 8);
}
