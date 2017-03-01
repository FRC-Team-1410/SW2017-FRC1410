#include "Commands/Autonomous/AutonomousTestShoot/AutonomousTestShoot.h"
#include "Commands/Autonomous/AutonomousTestDropoff/AutonomousTestDropoff.h"
#include "Commands/Autonomous/AutonomousTestStraight/AutonomousTestStraight.h"

#include <memory>

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include "Commands/TeleOp/TeleOpGearManipulator/TeleOpGearFlipFlopTheFloppyDoors.h"
#include "CommandBase.h"
#include "Robot.h"
#include <WPILib.h>

void Robot::RobotInit() {
	auto_choice.AddDefault("Test Shoot", new AutonomousTestShoot());
	auto_choice.AddObject("Test Dropoff", new AutonomousTestDropoff());
	auto_choice.AddObject("Test Straight", new AutonomousTestStraight());
	frc::SmartDashboard::PutData("Auto Modes", &auto_choice);
	CommandBase::oi.get()->InitializeHardware();
}

/**
 * This function is called once each time the robot enters Disabled mode.
 * You can use it to reset any subsystem information you want to clear when
 * the robot is disabled.
 */
void Robot::DisabledInit() {
	CommandBase::oi.get()->InitializeHardware();
}

void Robot::DisabledPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

/**
 * This autonomous (along with the chooser code above) shows how to select
 * between different autonomous modes using the dashboard. The sendable
 * chooser code works with the Java SmartDashboard. If you prefer the
 * LabVIEW Dashboard, remove all of the chooser code and uncomment the
 * GetString code to get the auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional commands to the
 * chooser code above (like the commented example) or additional comparisons
 * to the if-else structure below with additional strings & commands.
 */
void Robot::AutonomousInit() {
	std::string autoSelected = frc::SmartDashboard::GetString("Auto Selector", "Default");
	if (autoSelected == "Test Shoot") {
		auto_command.reset(new AutonomousTestShoot());
	}
	else if(autoSelected == "Test Dropoff"){
		auto_command.reset(new AutonomousTestDropoff());
	}
	else if(autoSelected == "Test Straight"){
		auto_command.reset(new AutonomousTestStraight());
	}
	else {
		auto_command.reset(new AutonomousTestShoot());
	}

	auto_command.reset(auto_choice.GetSelected());

	if (auto_command.get() != nullptr) {
		auto_command->Start();
	}
}
void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}
void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// this line or comment it out.
	if (auto_command != nullptr) {
		auto_command->Cancel();
		}
	CommandBase::oi.get()->InitializeHardware();
	//CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0);
}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
	//CommandBase::gearmanipulator.get()->FlapDoorsToHolderFastly(0);
}

void Robot::TestPeriodic() {
	frc::LiveWindow::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot)
