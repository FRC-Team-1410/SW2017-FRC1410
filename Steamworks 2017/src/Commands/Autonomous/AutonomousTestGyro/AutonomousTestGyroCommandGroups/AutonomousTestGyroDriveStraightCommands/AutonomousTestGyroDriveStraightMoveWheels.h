#ifndef AutonomousTestGyroDriveStraightMoveWheels_H
#define AutonomousTestGyroDriveStraightMoveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousTestGyroDriveStraightMoveWheels: public CommandBase {
public:
	AutonomousTestGyroDriveStraightMoveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // AutonomousTestGyroDriveStraightMoveWheels_H
