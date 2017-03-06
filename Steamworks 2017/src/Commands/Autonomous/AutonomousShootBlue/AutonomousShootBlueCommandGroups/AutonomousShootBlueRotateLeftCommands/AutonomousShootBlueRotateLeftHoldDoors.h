#ifndef AutonomousShootBlueRotateLeftHoldDoors_H
#define AutonomousShootBlueRotateLeftHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueRotateLeftHoldDoors: public CommandBase {
public:
	AutonomousShootBlueRotateLeftHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueRotateLeftHoldDoors_H
