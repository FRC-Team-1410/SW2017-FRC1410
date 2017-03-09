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

AutonomousUltimateRed::AutonomousUltimateRed() {
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedStrafeLeft(), 0.7); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedRotateLeft(), 0.2); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedObtainSpeed(), 1.0); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedShootFuel(), 6.0); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedRotateMore(), 0.5); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedDriveBackwards(), 1.2); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedRotateToPeg(), 1.0); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedDriveToPeg(), 3.5); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedOpenDoors(), 0.1); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedDriveAway(), 0.5); //DONE
	frc::CommandGroup::AddSequential(new AutonomousUltimateRedCloseDoors(), 0.1); //DONE
}
