#include "DriveBase.h"
#include <CANTalon.h>
#include <Commands/TeleOp/TeleOpDriveBase/TeleOpDriveBaseDriveMecanum.h>
#include <WPILib.h>
#include <AHRS.h>
#include "../RobotMap.h"
#include "../Robot.h"

DriveBase::DriveBase() : frc::Subsystem("DriveBase") {
	initialized = false;

	front_left_motor = 0;
	front_right_motor = 0;
	back_left_motor = 0;
	back_right_motor = 0;

	//front_left_mini = 0;
	//front_right_mini = 0;
	//back_left_mini = 0;
	//back_right_mini = 0;

	full_drive = 0;
	//mini_drive = 0;

	navigation = 0;

	lights = 0;
}

void DriveBase::InitDefaultCommand() {
	if(!initialized){
		DriveBase::InitializeHardware();
	}
	SetDefaultCommand(new TeleOpDriveBaseDriveMecanum());
}

void DriveBase::InitializeHardware(){
	initialized = true;

	front_left_motor = new CANTalon(front_left_motor_id);
	front_right_motor = new CANTalon(front_right_motor_id);
	back_left_motor = new CANTalon(back_left_motor_id);
	back_right_motor = new CANTalon(back_right_motor_id);

	//front_left_mini = new CANTalon(11);
	//front_right_mini = new CANTalon(12);
	//back_left_mini = new CANTalon(13);
	//back_right_mini = new CANTalon(14);

	full_drive = new frc::RobotDrive(front_left_motor, back_left_motor, front_right_motor, back_right_motor);

	//mini_drive = new frc::RobotDrive(front_left_mini, back_left_mini, front_right_mini, back_right_mini);

	//full_drive->SetInvertedMotor(full_drive->kFrontLeftMotor, true);
	full_drive->SetInvertedMotor(full_drive->kFrontRightMotor, true);
	//full_drive->SetInvertedMotor(full_drive->kRearLeftMotor, true);
	full_drive->SetInvertedMotor(full_drive->kRearRightMotor, true);

	//mini_drive->SetInvertedMotor(mini_drive->kFrontLeftMotor, true);
	//mini_drive->SetInvertedMotor(mini_drive->kFrontRightMotor, true);
	//mini_drive->SetInvertedMotor(mini_drive->kRearLeftMotor, true);
	//mini_drive->SetInvertedMotor(mini_drive->kRearRightMotor, true);

	full_drive->SetSafetyEnabled(false);
	full_drive->SetSensitivity(0.2);

	//mini_drive->SetSafetyEnabled(false);
	//mini_drive->SetSensitivity(0.2);

	front_left_motor->SetFeedbackDevice(CANTalon::QuadEncoder);
	front_right_motor->SetFeedbackDevice(CANTalon::QuadEncoder);

	navigation = new AHRS(SPI::Port::kMXP);

	DriveBase::ResetEncoders();

	lights = new frc::Relay(2);
}

void DriveBase::DriveMecanum(double x_magnitude, double y_magnitude, double rotation_magnitude){
	if(!initialized){
		DriveBase::InitializeHardware();
	}
	DriveBase::full_drive->MecanumDrive_Cartesian(x_magnitude, y_magnitude, rotation_magnitude);
	lights->Set(frc::Relay::Value::kForward);
	//DriveBase::mini_drive->MecanumDrive_Cartesian(x_magnitude, y_magnitude, rotation_magnitude);
}

float DriveBase::ReturnEncoderDistance(){
	if(!initialized){
		DriveBase::InitializeHardware();
	}

	float left_encoder = DriveBase::front_left_motor->GetEncPosition();
	float right_encoder = DriveBase::front_right_motor->GetEncPosition();

	float average;
	average = left_encoder + right_encoder;
	average /= 2;

	return average;
}

void DriveBase::ResetEncoders(){
	if(!initialized){
		DriveBase::InitializeHardware();
	}

	front_left_motor->SetEncPosition(0);
	front_right_motor->SetEncPosition(0);
}

void DriveBase::DriveStraight(float left_speed, float right_speed){
	front_left_motor->Set(left_speed);
	front_right_motor->Set(right_speed);
	back_left_motor->Set(left_speed);
	back_right_motor->Set(right_speed);
}

void DriveBase::SwitchToVoltage(){
	front_left_motor->SetControlMode(frc::CANSpeedController::ControlMode::kVoltage);
	front_right_motor->SetControlMode(frc::CANSpeedController::ControlMode::kVoltage);
	back_left_motor->SetControlMode(frc::CANSpeedController::ControlMode::kVoltage);
	back_right_motor->SetControlMode(frc::CANSpeedController::ControlMode::kVoltage);
}

void DriveBase::SwitchToPercentVbus(){
	front_left_motor->SetControlMode(frc::CANSpeedController::ControlMode::kPercentVbus);
	front_right_motor->SetControlMode(frc::CANSpeedController::ControlMode::kPercentVbus);
	back_left_motor->SetControlMode(frc::CANSpeedController::ControlMode::kPercentVbus);
	back_right_motor->SetControlMode(frc::CANSpeedController::ControlMode::kPercentVbus);
}

float DriveBase::ReturnDrivenTicks(){
	if(!initialized){
		DriveBase::InitializeHardware();
	}

	float distance;

	float left_encoder;
	float right_encoder;

	left_encoder = front_left_motor->GetEncPosition();
	right_encoder = front_right_motor->GetEncPosition();

	distance = (left_encoder + right_encoder) / 2;

	//SmartDashboard::PutNumber("Distance in Ticks", distance);
	return distance;
}

float DriveBase::ReturnDrivenInches(float radius){
	if(!initialized){
		DriveBase::InitializeHardware();
	}

	float pi = 3.14159265;
	float circumference = 2 * pi * radius;
	float ticks_per_revolution = 1024;
	SmartDashboard::PutNumber("CIRCUMFERENCE", circumference);

	float left_encoder = front_left_motor->GetEncPosition();
	float right_encoder = front_right_motor->GetEncPosition();

	SmartDashboard::PutNumber("LEFT ENCODER", left_encoder);
	SmartDashboard::PutNumber("RIGHT ENCODER", right_encoder);

	float average_encoders = (left_encoder + right_encoder) / 2;
	SmartDashboard::PutNumber("Distance in Ticks", average_encoders);
	float revolutions = (average_encoders / ticks_per_revolution);
	SmartDashboard::PutNumber("REVOLUTIONS", revolutions);

	float distance_covered = circumference * revolutions;
	SmartDashboard::PutNumber("Distance in Inches", distance_covered);
	return distance_covered;
}

float DriveBase::ReturnAngle(){
	float angle = navigation->GetAngle();
	return angle;
}

void DriveBase::PutNumbersFromNavXMXP(){
	float pitch = navigation->GetPitch();
	SmartDashboard::PutNumber("Pitch", pitch);
	float roll = navigation->GetRoll();
	SmartDashboard::PutNumber("Roll", roll);
	float yaw = navigation->GetYaw();
	SmartDashboard::PutNumber("Yaw", yaw);

	float compass_heading = navigation->GetCompassHeading();
	SmartDashboard::PutNumber("Compass Heading", compass_heading);

	float world_linear_acceleration_x = navigation->GetWorldLinearAccelX();
	SmartDashboard::PutNumber("World Linear Acceleration X", world_linear_acceleration_x);
	float world_linear_acceleration_y = navigation->GetWorldLinearAccelY();
	SmartDashboard::PutNumber("World Linear Acceleration Y", world_linear_acceleration_y);
	float world_linear_acceleration_z = navigation->GetWorldLinearAccelZ();
	SmartDashboard::PutNumber("World Linear Acceleration Z", world_linear_acceleration_z);

	float barometric_pressure = navigation->GetBarometricPressure();
	SmartDashboard::PutNumber("Barometric Pressure", barometric_pressure);
	float altitude = navigation->GetAltitude();
	SmartDashboard::PutNumber("Altitude", altitude);

	float quaternion_w = navigation->GetQuaternionW();
	SmartDashboard::PutNumber("Quaternion W", quaternion_w);
	float quaternion_x = navigation->GetQuaternionX();
	SmartDashboard::PutNumber("Quaternion X", quaternion_x);
	float quaternion_y = navigation->GetQuaternionY();
	SmartDashboard::PutNumber("Quaternion Y", quaternion_y);
	float quaternion_z = navigation->GetQuaternionZ();
	SmartDashboard::PutNumber("Quarternion Z", quaternion_z);

	float velocity_x = navigation->GetVelocityX();
	SmartDashboard::PutNumber("Velocity X", velocity_x);
	float velocity_y = navigation->GetVelocityY();
	SmartDashboard::PutNumber("Velocity Y", velocity_y);
	float velocity_z = navigation->GetVelocityZ();
	SmartDashboard::PutNumber("Velocity Z", velocity_z);

	float displacement_x = navigation->GetDisplacementX();
	SmartDashboard::PutNumber("Displacement X", displacement_x);
	float displacement_y = navigation->GetDisplacementY();
	SmartDashboard::PutNumber("Displacement Y", displacement_y);
	float displacement_z = navigation->GetDisplacementZ();
	SmartDashboard::PutNumber("Displacement Z", displacement_z);

	float angle = navigation->GetAngle();
	SmartDashboard::PutNumber("Angle", angle);

	float rate = navigation->GetRate();
	SmartDashboard::PutNumber("Rate", rate);

	float angle_adjustment = navigation->GetAngleAdjustment();
	SmartDashboard::PutNumber("Angle Adjustment", angle_adjustment);

	float raw_gyro_x = navigation->GetRawGyroX();
	SmartDashboard::PutNumber("Raw Gyro X", raw_gyro_x);
	float raw_gyro_y = navigation->GetRawGyroY();
	SmartDashboard::PutNumber("Raw Gyro Y", raw_gyro_y);
	float raw_gyro_z = navigation->GetRawGyroZ();
	SmartDashboard::PutNumber("Raw Gyro Z", raw_gyro_z);

	float raw_acceleration_x = navigation->GetRawAccelX();
	SmartDashboard::PutNumber("Raw Acceleration X", raw_acceleration_x);
	float raw_acceleration_y = navigation->GetRawAccelY();
	SmartDashboard::PutNumber("Raw Acceleration Y", raw_acceleration_y);
	float raw_acceleration_z = navigation->GetRawAccelZ();
	SmartDashboard::PutNumber("Raw Acceleration Z", raw_acceleration_z);

	float raw_magnetometer_x = navigation->GetRawMagX();
	SmartDashboard::PutNumber("Raw Magnetometer X", raw_magnetometer_x);
	float raw_magnetometer_y = navigation->GetRawMagY();
	SmartDashboard::PutNumber("Raw Magnetometer Y", raw_magnetometer_y);
	float raw_magnetometer_z = navigation->GetRawMagZ();
	SmartDashboard::PutNumber("Raw Magnetometer Z", raw_magnetometer_z);

	float pressure = navigation->GetPressure();
	SmartDashboard::PutNumber("Pressure", pressure);

	float temperature_celsius = navigation->GetTempC();
	SmartDashboard::PutNumber("Temperature Celsius", temperature_celsius);
}

void DriveBase::ResetGyro(){
	navigation->Reset();
}

void DriveBase::DriveTank(float left_speed, float right_speed){
	front_left_motor->Set(left_speed);
	front_right_motor->Set(right_speed);
	back_left_motor->Set(left_speed);
	back_right_motor->Set(right_speed);
}
