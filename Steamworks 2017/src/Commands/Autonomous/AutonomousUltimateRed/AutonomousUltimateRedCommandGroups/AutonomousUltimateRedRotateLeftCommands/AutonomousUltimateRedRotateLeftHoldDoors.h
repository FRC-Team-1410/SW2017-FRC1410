#ifndef AutonomousUltimateRedRotateLeftHoldDoors_H
#define AutonomousUltimateRedRotateLeftHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedRotateLeftHoldDoors: public CommandBase {
public:
	AutonomousUltimateRedRotateLeftHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedRotateLeftHoldDoors_H
