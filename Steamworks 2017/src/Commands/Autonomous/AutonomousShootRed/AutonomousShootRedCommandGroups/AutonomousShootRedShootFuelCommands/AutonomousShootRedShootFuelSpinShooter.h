#ifndef AutonomousShootRedShootFuelSpinShooter_H
#define AutonomousShootRedShootFuelSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedShootFuelSpinShooter: public CommandBase {
public:
	AutonomousShootRedShootFuelSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedShootFuelSpinShooter_H
