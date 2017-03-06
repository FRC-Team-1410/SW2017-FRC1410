#ifndef AutonomousShootBlueDriveBackwardsHoldDoors_H
#define AutonomousShootBlueDriveBackwardsHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueDriveBackwardsHoldDoors: public CommandBase {
public:
	AutonomousShootBlueDriveBackwardsHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueDriveBackwardsHoldDoors_H
