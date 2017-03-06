#include "AutonomousShootBlue.h"
#include "WPILib.h"
#include "AutonomousShootBlueCommandGroups/AutonomousShootBlueRotateLeft.h"
#include "AutonomousShootBlueCommandGroups/AutonomousShootBlueObtainSpeed.h"
#include "AutonomousShootBlueCommandGroups/AutonomousShootBlueShootFuel.h"
#include "AutonomousShootBlueCommandGroups/AutonomousShootBlueDriveBackwards.h"
#include "AutonomousShootBlueCommandGroups/AutonomousShootBlueRotateBack.h"

AutonomousShootBlue::AutonomousShootBlue() {
	frc::CommandGroup::AddSequential(new AutonomousShootBlueRotateLeft(), 0.5);
	frc::CommandGroup::AddSequential(new AutonomousShootBlueObtainSpeed(), 2.5);
	frc::CommandGroup::AddSequential(new AutonomousShootBlueShootFuel(), 8.5);
	frc::CommandGroup::AddSequential(new AutonomousShootBlueRotateBack(), 1);
	frc::CommandGroup::AddSequential(new AutonomousShootBlueDriveBackwards(), 2);
}
