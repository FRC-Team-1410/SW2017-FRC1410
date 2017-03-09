#include "AutonomousUltimateRed.h"
#include "WPILib.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedStrafeLeft.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedRotateLeft.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedObtainSpeed.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedShootFuel.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedRotateMore.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedDriveBackwards.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedRotateToPeg.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedDriveToPeg.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedOpenDoors.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedDriveAway.h"
#include "AutonomousUltimateRedCommandGroups/AutonomousUltimateRedCloseDoors.h"

AutonomousShootRed::AutonomousShootRed() {
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedStrafeLeft()); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedRotateLeft()); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedObtainSpeed()); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedShootFuel()); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedRotateMore()); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedDriveBackwards());
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedRotateToPeg());
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedDriveToPeg());
	frc::CommandGroup::AddSeuqential(new AutonomousUltimateRedOpenDoors());
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedDriveAway());
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedCloseDoors());
}
