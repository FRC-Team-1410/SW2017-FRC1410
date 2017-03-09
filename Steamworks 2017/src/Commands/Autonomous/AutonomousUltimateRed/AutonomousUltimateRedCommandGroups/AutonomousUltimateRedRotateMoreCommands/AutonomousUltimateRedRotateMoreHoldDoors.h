#ifndef AutonomousUltimateRedRotateMoreHoldDoors_H
#define AutonomousUltimateRedRotateMoreHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedRotateMoreHoldDoors: public CommandBase {
public:
	AutonomousUltimateRedRotateMoreHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedRotateMoreHoldDoors_H
