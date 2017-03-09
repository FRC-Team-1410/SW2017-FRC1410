#ifndef AutonomousUltimateRedShootFuelRotateHopper_H
#define AutonomousUltimateRedShootFuelRotateHopper_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedShootFuelRotateHopper: public CommandBase {
public:
	AutonomousUltimateRedShootFuelRotateHopper();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedShootFuelRotateHopper_H
