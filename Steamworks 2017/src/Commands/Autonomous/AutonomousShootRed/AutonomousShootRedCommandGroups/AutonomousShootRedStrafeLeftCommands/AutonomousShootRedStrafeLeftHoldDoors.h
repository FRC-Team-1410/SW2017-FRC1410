#ifndef AutonomousShootRedStrafeLeftHoldDoors_H
#define AutonomousShootRedStrafeLeftHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedStrafeLeftHoldDoors: public CommandBase {
public:
	AutonomousShootRedStrafeLeftHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedStrafeLeftHoldDoors
