#ifndef AutonomousShootRedDriveBackwardsHoldDoors_H
#define AutonomousShootRedDriveBackwardsHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedDriveBackwardsHoldDoors: public CommandBase {
public:
	AutonomousShootRedDriveBackwardsHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedDriveBackwardsHoldDoors_H
