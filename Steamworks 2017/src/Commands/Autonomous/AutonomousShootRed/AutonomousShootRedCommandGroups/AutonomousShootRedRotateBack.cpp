#include "AutonomousShootRedRotateBack.h"
#include "AutonomousShootRedRotateBackCommands/AutonomousShootRedRotateBackHoldDoors.h"
#include "AutonomousShootRedRotateBackCommands/AutonomousShootRedRotateBackRotateWheels.h"

AutonomousShootRedRotateBack::AutonomousShootRedRotateBack() {
	frc::CommandGroup::AddParallel(new AutonomousShootRedRotateBackHoldDoors(), 1);
	frc::CommandGroup::AddParallel(new AutonomousShootRedRotateBackRotateWheels(), 1);
	SmartDashboard::PutNumber("Part: " , 5);
}
