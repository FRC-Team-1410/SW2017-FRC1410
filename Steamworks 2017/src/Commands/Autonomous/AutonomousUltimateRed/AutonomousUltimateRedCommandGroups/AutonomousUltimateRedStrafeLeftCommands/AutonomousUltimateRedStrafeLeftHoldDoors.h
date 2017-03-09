#ifndef AutonomousUltimateRedStrafeLeftHoldDoors_H
#define AutonomousUltimateRedStrafeLeftHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedStrafeLeftHoldDoors: public CommandBase {
public:
	AutonomousUltimateRedStrafeLeftHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedStrafeLeftHoldDoors_H
