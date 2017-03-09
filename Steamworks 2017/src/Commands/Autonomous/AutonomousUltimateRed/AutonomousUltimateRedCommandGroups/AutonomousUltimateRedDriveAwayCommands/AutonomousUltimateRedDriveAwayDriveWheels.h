#ifndef AutonomousUltimateRedDriveAwayDriveWheels_H
#define AutonomousUltimateRedDriveAwayDriveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedDriveAwayDriveWheels: public CommandBase {
public:
	AutonomousUltimateRedDriveAwayDriveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedDriveAwayDriveWheels_H
