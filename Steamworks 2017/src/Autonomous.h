#ifndef Autonomous_H
#define Autonomous_H
#include <memory>

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>

#include "CommandBase.h"
#include <WPILib.h>

class AutonomousMode{
public:
	void Drive5Seconds() override;
};

#endif // Robot_H
