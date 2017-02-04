#include <iostream>
#include <memory>
#include <string>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <CommandBase.h>
#include <DriveBase.h>
#include <Autonomous.h>
#include <Timer.h>

class AutonomousMode: public frc::IterativeRobot
{
public:
	void Drive5Seconds()
	{
		Timer * AutoTimer = new Timer();
		double trigger = 0.1;

		AutoTimer->Start();
		while (trigger < 5)
			{
				DriveBase::full_drive->Drive(1,0);
				trigger = AutoTimer->Get();
			}
		AutoTimer->Stop();
		DriveBase::full_drive->Drive(0,0);
	}
};

START_ROBOT_CLASS(Robot)
