#include "CommandBase.h"

#include <Commands/Scheduler.h>

#include "Autonomous.h"
#include "OI.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/GearManipulator.h"
#include "Subsystems/Climber.h"

std::unique_ptr<AutonomousMode> CommandBase::autonomous = std::make_unique<AutonomousMode>();
std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();
std::unique_ptr<DriveBase> CommandBase::drivebase = std::make_unique<DriveBase>();
std::unique_ptr<GearManipulator> CommandBase::gearmanipulator = std::make_unique<GearManipulator>();
std::unique_ptr<Climber> CommandBase::climber = std::make_unique<Climber>();
std::unique_ptr<Shooter> CommandBase::shooter = std::make_unique<Shooter>();
std::unique_ptr<Intake> CommandBase::intake = std::make_unique<Intake>();
std::unique_ptr<Hopper> CommandBase::hopper = std::make_unique<Hopper>();

CommandBase::CommandBase(const std::string &name) : frc::Command(name) {

}
