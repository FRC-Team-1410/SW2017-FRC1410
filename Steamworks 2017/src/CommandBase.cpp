#include "CommandBase.h"

#include <Commands/Scheduler.h>

#include "OI.h"
#include "Subsystems/ClimbingSystem.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/GearManipulator.h"
#include "Subsystems/ShootingSystem.h"

//Initialize the single instances of each subsystem below
std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();
std::unique_ptr<ClimbingSystem> CommandBase::climbingsystem = std::make_unique<ClimbingSystem>();
std::unique_ptr<DriveBase> CommandBase::drivebase = std::make_unique<DriveBase>();
std::unique_ptr<GearManipulator> CommandBase::gearmanipulator = std::make_unique<GearManipulator>();
std::unique_ptr<ShootingSystem> CommandBase::shootingsystem = std::make_unique<ShootingSystem>();

CommandBase::CommandBase(const std::string &name) : frc::Command(name) {

}
