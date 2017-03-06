#ifndef AutonomousShootBlueShootFuelSpinShooter_H
#define AutonomousShootBlueShootFuelSpinShooter_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueShootFuelSpinShooter: public CommandBase {
public:
	AutonomousShootBlueShootFuelSpinShooter();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueShootFuelSpinShooter_h
