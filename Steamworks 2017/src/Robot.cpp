#include <memory>

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <WPILib.h>

#include "Robot.h"
#include "CommandBase.h"

#include "OI.h"
#include "Subsystems/ClimbingSystem.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/GearManipulator.h"
#include "Subsystems/ShootingSystem.h"

OI * Robot::oi = NULL;
ClimbingSystem * Robot::climbingsystem = NULL;
DriveBase * Robot::drivebase = NULL;
GearManipulator * Robot::gearmanipulator = NULL;
ShootingSystem * Robot::shootingsystem = NULL;

void Robot::RobotInit(){
	//chooser.AddDefault("Default Auto", new ExampleCommand());
	// chooser.AddObject("My Auto", new MyAutoCommand());
	//frc::SmartDashboard::PutData("Auto Modes", &chooser);
	oi = new OI();
	climbingsystem = new ClimbingSystem();
	drivebase = new DriveBase();
	gearmanipulator = new GearManipulator();
	shootingsystem = new ShootingSystem();

	live_window = LiveWindow::GetInstance();
}

void Robot::AutonomousInit(){

}

void Robot::AutonomousPeriodic(){
	frc::Scheduler::GetInstance()->Run();
}

void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic(){
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit(){

}

void Robot::TeleopPeriodic(){
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic(){
	live_window->Run();
}

START_ROBOT_CLASS(Robot)
