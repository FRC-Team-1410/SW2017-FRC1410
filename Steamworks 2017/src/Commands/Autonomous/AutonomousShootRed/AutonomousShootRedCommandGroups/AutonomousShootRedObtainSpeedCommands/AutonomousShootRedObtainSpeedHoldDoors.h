#ifndef AutonomousShootRedObtainSpeedHoldDoors_H
#define AutonomousShootRedObtainSpeedHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedObtainSpeedHoldDoors: public CommandBase {
public:
	AutonomousShootRedObtainSpeedHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedObtainSpeedHoldDoors_H
