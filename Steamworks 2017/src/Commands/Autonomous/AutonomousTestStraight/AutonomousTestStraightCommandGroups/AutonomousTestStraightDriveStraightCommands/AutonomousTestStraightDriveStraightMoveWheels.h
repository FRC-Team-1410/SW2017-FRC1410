#ifndef AutonomousTestStraightDriveStraightMoveWheels_H
#define AutonomousTestStraightDriveStraightMoveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousTestStraightDriveStraightMoveWheels: public CommandBase {
public:
	AutonomousTestStraightDriveStraightMoveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousTestStraightDriveStraightMoveWheels
