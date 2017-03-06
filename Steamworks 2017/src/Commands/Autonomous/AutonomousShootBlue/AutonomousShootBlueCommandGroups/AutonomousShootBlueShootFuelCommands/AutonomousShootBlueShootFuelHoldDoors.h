#ifndef AutonomousShootBlueShootFuelHoldDoors_H
#define AutonomousShootBlueShootFuelHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueShootFuelHoldDoors: public CommandBase {
public:
	AutonomousShootBlueShootFuelHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueShootFuelHoldDoors_H
