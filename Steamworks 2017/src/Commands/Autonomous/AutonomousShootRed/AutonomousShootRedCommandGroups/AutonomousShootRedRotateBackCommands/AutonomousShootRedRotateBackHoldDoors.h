#ifndef AutonomousShootRedRotateBackHoldDoors_H
#define AutonomousShootRedRotateBackHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedRotateBackHoldDoors: public CommandBase {
public:
	AutonomousShootRedRotateBackHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedRotateBackHoldDoors_H
