#ifndef AutonomousShootBlueObtainSpeedHoldDoors_H
#define AutonomousShootBlueObtainSpeedHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueObtainSpeedHoldDoors: public CommandBase {
public:
	AutonomousShootBlueObtainSpeedHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueObtainSpeedHoldDoors_H
