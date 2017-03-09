#ifndef AutonomousUltimateRedShootFuelSpinShooter_H
#define AutonomousUltimateRedShootFuelSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedShootFuelSpinShooter: public CommandBase {
public:
	AutonomousUltimateRedShootFuelSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedShootFuelSpinShooter_H
