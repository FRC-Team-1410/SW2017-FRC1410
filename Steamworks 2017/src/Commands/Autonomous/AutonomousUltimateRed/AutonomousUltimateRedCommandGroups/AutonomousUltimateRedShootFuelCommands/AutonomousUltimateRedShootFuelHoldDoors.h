#ifndef AutonomousUltimateRedShootFuelHoldDoors_H
#define AutonomousUltimateRedShootFuelHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedShootFuelHoldDoors: public CommandBase {
public:
	AutonomousUltimateRedShootFuelHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedShootFuelHoldDoors_H
