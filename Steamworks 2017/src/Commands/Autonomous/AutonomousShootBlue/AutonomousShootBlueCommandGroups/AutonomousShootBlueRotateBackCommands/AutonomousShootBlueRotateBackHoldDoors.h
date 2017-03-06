#ifndef AutonomousShootBlueRotateBackHoldDoors_H
#define AutonomousShootBlueRotateBackHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueRotateBackHoldDoors: public CommandBase {
public:
	AutonomousShootBlueRotateBackHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueRotateBackHoldDoors
