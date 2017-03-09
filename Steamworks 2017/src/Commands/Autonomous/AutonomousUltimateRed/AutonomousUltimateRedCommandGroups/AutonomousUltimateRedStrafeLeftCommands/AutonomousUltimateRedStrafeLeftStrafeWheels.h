#ifndef AutonomousUltimateRedStrafeLeftStrafeWheels_H
#define AutonomousUltimateRedStrafeLeftStrafeWheels_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedStrafeLeftStrafeWheels: public CommandBase {
public:
	AutonomousUltimateRedStrafeLeftStrafeWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedStrafeLeftStrafeWheels_H
