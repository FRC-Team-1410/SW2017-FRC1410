#ifndef AutonomousShootRedObtainSpeedSpinShooter_H
#define AutonomousShootRedObtainSpeedSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedObtainSpeedSpinShooter: public CommandBase {
public:
	AutonomousShootRedObtainSpeedSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedObtainSpeedSpinShooter_H
