#ifndef AutonomousUltimateRedDriveBackwardsDriveWheels_H
#define AutonomousUltimateRedDriveBackwardsDriveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedDriveBackwardsDriveWheels: public CommandBase {
public:
	AutonomousUltimateRedDriveBackwardsDriveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedDriveBackwardsDriveWheels_H
