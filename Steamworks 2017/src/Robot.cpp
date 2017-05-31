#include "Commands/Autonomous/AutonomousTestShoot/AutonomousTestShoot.h"
#include "Commands/Autonomous/AutonomousTestDropoff/AutonomousTestDropoff.h"
#include "Commands/Autonomous/AutonomousTestStraight/AutonomousTestStraight.h"
#include "Commands/Autonomous/AutonomousTestTurn/AutonomousTestTurn.h"
#include "Commands/Autonomous/AutonomousTestGyro/AutonomousTestGyro.h"
#include "Commands/Autonomous/AutonomousShootRed/AutonomousShootRed.h"
#include "Commands/Autonomous/AutonomousShootBlue/AutonomousShootBlue.h"
#include "Commands/Autonomous/AutonomousScoreGear/AutonomousScoreGear.h"
#include "Commands/Autonomous/AutonomousUltimateRed/AutonomousUltimateRed.h"

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
	auto_choice.AddObject("Test Shoot", new AutonomousTestShoot());
	auto_choice.AddObject("Test Dropoff", new AutonomousTestDropoff());
	auto_choice.AddObject("Test Straight", new AutonomousTestStraight());
	auto_choice.AddObject("Test Turn", new AutonomousTestTurn());
	auto_choice.AddObject("Test Gyro", new AutonomousTestGyro());
	auto_choice.AddObject("Shoot Red", new AutonomousShootRed());
	auto_choice.AddObject("Shoot Blue", new AutonomousShootBlue());
	auto_choice.AddDefault("Score Gear", new AutonomousScoreGear());
	auto_choice.AddObject("Bippity Boppipty Give Me The Zoppity (Red)", new AutonomousUltimateRed());

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

	else if(autoSelected == "Test Turn"){
		auto_command.reset(new AutonomousTestTurn());
	}

	else if(autoSelected == "Test Gyro"){
		auto_command.reset(new AutonomousTestGyro());
	}

	else if(autoSelected == "Shoot Red"){
		auto_command.reset(new AutonomousShootRed());
	}

	else if(autoSelected == "Shoot Blue"){
		auto_command.reset(new AutonomousShootBlue());
	}

	else if(autoSelected == "Score Gear"){
		auto_command.reset(new AutonomousScoreGear());
	}

	else if(autoSelected == "Bippity Boppity Give Me The Zoppity (Red)"){
		auto_command.reset(new AutonomousUltimateRed());
	}

	else {
		auto_command.reset(new AutonomousScoreGear());
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
