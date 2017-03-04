#ifndef AutonomousTestStraightDriveStraightRotateHinges_H
#define AutonomousTestStraightDriveStraightRotateHinges_H

#include "../../../../../CommandBase.h"

class AutonomousTestStraightDriveStraightRotateHinges: public CommandBase {
public:
	AutonomousTestStraightDriveStraightRotateHinges();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // AutonomousTestStraightDriveStraightRotateHinges_H
