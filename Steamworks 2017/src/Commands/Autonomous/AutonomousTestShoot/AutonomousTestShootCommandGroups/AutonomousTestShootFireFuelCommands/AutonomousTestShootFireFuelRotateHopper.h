#ifndef AutonomousTestShootFireFuelRotateHopper_H
#define AutonomousTestShootFireFuelRotateHopper_H

#include "../../../../../CommandBase.h"

class AutonomousTestShootFireFuelRotateHopper: public CommandBase {
public:
	AutonomousTestShootFireFuelRotateHopper();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // AutonomousTestShootFireFuelRotateHopper_H
