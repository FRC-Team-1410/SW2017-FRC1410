#ifndef AutonomousShootBlueRotateLeftSpinShooter_H
#define AutonomousShootBlueRotateLeftSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueRotateLeftSpinShooter: public CommandBase {
public:
	AutonomousShootBlueRotateLeftSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueRotateLeftSpinShooter_H
