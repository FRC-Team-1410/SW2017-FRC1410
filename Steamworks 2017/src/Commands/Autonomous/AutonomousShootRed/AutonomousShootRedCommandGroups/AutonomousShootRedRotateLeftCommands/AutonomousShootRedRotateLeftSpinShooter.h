#ifndef AutonomousShootRedRotateLeftSpinShooter_H
#define AutonomousShootRedRotateLeftSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedRotateLeftSpinShooter: public CommandBase {
public:
	AutonomousShootRedRotateLeftSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedRotateLeftSpinShooter_H
