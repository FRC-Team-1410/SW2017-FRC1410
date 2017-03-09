#ifndef AutonomousUltimateRedObtainSpeedSpinShooter_H
#define AutonomousUltimateRedObtainSpeedSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedObtainSpeedSpinShooter: public CommandBase {
public:
	AutonomousUltimateRedObtainSpeedSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedObtainSpeedSpinShooter_H
