#ifndef AutonomousShootRedShootFuelRotateHopper_H
#define AutonomousShootRedShootFuelRotateHopper_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedShootFuelRotateHopper: public CommandBase {
public:
	AutonomousShootRedShootFuelRotateHopper();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedShootFuelRotateHopper_H
