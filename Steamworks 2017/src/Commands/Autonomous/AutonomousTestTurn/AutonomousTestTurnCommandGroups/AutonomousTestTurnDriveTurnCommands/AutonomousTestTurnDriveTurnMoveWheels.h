#ifndef AutonomousTestTurnDriveTurnMoveWheels_H
#define AutonomousTestTurnDriveTurnMoveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousTestTurnDriveTurnMoveWheels: public CommandBase {
public:
	AutonomousTestTurnDriveTurnMoveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // AutonomousTestTurnDriveTurnMoveWheels_H
