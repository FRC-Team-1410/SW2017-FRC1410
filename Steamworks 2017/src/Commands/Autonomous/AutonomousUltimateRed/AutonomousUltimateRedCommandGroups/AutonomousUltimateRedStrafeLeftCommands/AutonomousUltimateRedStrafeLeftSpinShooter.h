#ifndef AutonomousUltimateRedStrafeLeftSpinShooter_H
#define AutonomousUltimateRedStrafeLeftSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedStrafeLeftSpinShooter: public CommandBase {
public:
	AutonomousUltimateRedStrafeLeftSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedStrafeLeftSpinShooter_H
