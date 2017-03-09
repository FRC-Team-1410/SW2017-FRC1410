#ifndef AutonomousUltimateRedObtainSpeedHoldDoors_H
#define AutonomousUltimateRedObtainSpeedHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedObtainSpeedHoldDoors: public CommandBase {
public:
	AutonomousUltimateRedObtainSpeedHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedObtainSpeedHoldDoors_H
