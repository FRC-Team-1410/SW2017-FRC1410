#ifndef AutonomousShootBlueObtainSpeedSpinShooter_H
#define AutonomousShootBlueObtainSpeedSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueObtainSpeedSpinShooter: public CommandBase {
public:
	AutonomousShootBlueObtainSpeedSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueObtainSpeedSpinShooter_H
