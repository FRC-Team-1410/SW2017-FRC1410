#ifndef AutonomousShootRedRotateLeftHoldDoors_H
#define AutonomousShootRedRotateLeftHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedRotateLeftHoldDoors: public CommandBase {
public:
	AutonomousShootRedRotateLeftHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedRotateLeftHoldDoors
