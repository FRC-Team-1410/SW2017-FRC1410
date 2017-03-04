#ifndef AutonomousShootRedStrafeLeftStrafeWheels_H
#define AutonomousShootRedStrafeLeftStrafeWheels_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedStrafeLeftStrafeWheels: public CommandBase {
public:
	AutonomousShootRedStrafeLeftStrafeWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedStrafeLeftStrafeWheels_H
