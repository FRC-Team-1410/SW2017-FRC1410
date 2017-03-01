#ifndef AutonomousTestShootFireFuelMaintainSpeed_H
#define AutonomousTestShootFireFuelMaintainSpeed_H

#include "../../../../../CommandBase.h"

class AutonomousTestShootFireFuelMaintainSpeed: public CommandBase {
public:
	AutonomousTestShootFireFuelMaintainSpeed();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // AutonomousTestShootFireFuelMaintainSpeed_H
