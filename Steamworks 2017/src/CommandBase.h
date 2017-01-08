#ifndef CommandBase_H
#define CommandBase_H

#include <memory>
#include <string>

#include <Commands/Command.h>

#include "OI.h"
#include "Subsystems/ClimbingSystem.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/GearManipulator.h"
#include "Subsystems/ShootingSystem.h"

class CommandBase: public frc::Command {
public:
	CommandBase(const std::string& name);
	CommandBase() = default;

	// Creates a single static instance of all the robot's subsystems
	static std::unique_ptr<OI> oi; //Operator Interface instance
	static std::unique_ptr<ClimbingSystem> climbingsystem; //Climbing System instance
	static std::unique_ptr<DriveBase> drivebase; //Drive Base instance
	static std::unique_ptr<GearManipulator> gearmanipulator; //Gear Manipulator instance
	static std::unique_ptr<ShootingSystem> shootingsystem; //Shooting System instance
};

#endif  // CommandBase_H
