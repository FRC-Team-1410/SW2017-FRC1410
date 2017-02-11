#ifndef CommandBase_H
#define CommandBase_H

#include <memory>
#include <string>

#include <Commands/Command.h>

#include "Autonomous.h"
#include "OI.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/GearManipulator.h"
#include "Subsystems/Climber.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Intake.h"
#include "Subsystems/Hopper.h"
#include "Robot.h"

class CommandBase: public frc::Command {
public:
	CommandBase(const std::string& name);
	CommandBase() = default;

	// Create a single static instance of all of your subsystems
	static std::unique_ptr<AutonomousMode> autonomous;
	static std::unique_ptr<OI> oi;
	static std::unique_ptr<DriveBase> drivebase;
	static std::unique_ptr<GearManipulator> gearmanipulator;
	static std::unique_ptr<Climber> climber;
	static std::unique_ptr<Shooter> shooter;
	static std::unique_ptr<Intake> intake;
	static std::unique_ptr<Agitate> agitate;
};

#endif  // CommandBase_H
