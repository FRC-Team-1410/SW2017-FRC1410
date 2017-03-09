#ifndef AutonomousUltimateRedDriveBackwardsHoldDoors_H
#define AutonomousUltimateRedDriveBackwardsHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedDriveBackwardsHoldDoors: public CommandBase {
public:
	AutonomousUltimateRedDriveBackwardsHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedDriveBackwardsHoldDoors_H
