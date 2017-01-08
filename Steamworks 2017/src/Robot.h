#ifndef Robot_H
#define Robot_H

#include <memory>

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <WPILib.h>

#include "OI.h"
#include "Subsystems/ClimbingSystem.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/GearManipulator.h"
#include "Subsystems/ShootingSystem.h"

class Robot : public frc::IterativeRobot {
public:
	static OI * oi;
	static ClimbingSystem * climbingsystem;
	static DriveBase * drivebase;
	static GearManipulator * gearmanipulator;
	static ShootingSystem * shootingsystem;

	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

private:
	frc::LiveWindow * live_window;
	//frc::Command * auto_command;
	//frc::SendableChooser * auto_chooser;s
};

#endif //Robot_H
