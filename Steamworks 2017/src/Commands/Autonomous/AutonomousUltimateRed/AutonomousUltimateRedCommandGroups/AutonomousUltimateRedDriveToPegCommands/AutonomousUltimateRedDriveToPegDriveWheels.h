#ifndef AutonomousUltimateRedDriveToPegDriveWheels_H
#define AutonomousUltimateRedDriveToPegDriveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedDriveToPegDriveWheels: public CommandBase {
public:
	AutonomousUltimateRedDriveToPegDriveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedDriveToPegDriveWheels_H
