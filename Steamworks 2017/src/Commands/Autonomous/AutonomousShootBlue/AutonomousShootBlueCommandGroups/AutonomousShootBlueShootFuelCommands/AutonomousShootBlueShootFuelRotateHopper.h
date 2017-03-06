#ifndef AutonomousShootBlueShootFuelRotateHopper_H
#define AutonomousShootBlueShootFuelRotateHopper_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueShootFuelRotateHopper: public CommandBase {
public:
	AutonomousShootBlueShootFuelRotateHopper();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueShootFuelRotateHopper_H
