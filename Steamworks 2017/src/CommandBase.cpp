#include "CommandBase.h"

#include <Commands/Scheduler.h>

#include "OI.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/GearManipulator.h"

std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();
std::unique_ptr<DriveBase> CommandBase::drivebase = std::make_unique<DriveBase>();
std::unique_ptr<GearManipulator> CommandBase::gearmanipulator = std::make_unique<GearManipulator>();

CommandBase::CommandBase(const std::string &name) : frc::Command(name) {

}
