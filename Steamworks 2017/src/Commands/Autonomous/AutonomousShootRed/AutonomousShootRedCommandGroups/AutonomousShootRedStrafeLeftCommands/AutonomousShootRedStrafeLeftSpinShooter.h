#ifndef AutonomousShootRedStrafeLeftSpinShooter_H
#define AutonomousShootRedStrafeLeftSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedStrafeLeftSpinShooter: public CommandBase {
public:
	AutonomousShootRedStrafeLeftSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedStrafeLeftSpinShooter_H
