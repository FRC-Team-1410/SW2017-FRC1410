#ifndef AutonomousShootRedShootFuelHoldDoors_H
#define AutonomousShootRedShootFuelHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedShootFuelHoldDoors: public CommandBase {
public:
	AutonomousShootRedShootFuelHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedShootFuelHoldDoors
