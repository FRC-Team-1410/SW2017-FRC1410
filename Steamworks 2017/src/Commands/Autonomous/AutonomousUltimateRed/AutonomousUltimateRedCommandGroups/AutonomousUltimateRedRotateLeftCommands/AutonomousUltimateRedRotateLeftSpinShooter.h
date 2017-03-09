#ifndef AutonomousUltimateRedRotateLeftSpinShooter_H
#define AutonomousUltimateRedRotateLeftSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedRotateLeftSpinShooter: public CommandBase {
public:
	AutonomousUltimateRedRotateLeftSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedRotateLeftSpinShooter_H
