#ifndef Robot_H
#define Robot_H
#include <memory>

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>

#include "CommandBase.h"
#include <WPILib.h>

class Robot : public frc::IterativeRobot{
public:
	void RobotInit() override;
	void DisabledInit() override ;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

private:
	std::unique_ptr<frc::Command> auto_command;
	frc::SendableChooser<frc::Command*> auto_choice;
};

#endif // Robot_H
