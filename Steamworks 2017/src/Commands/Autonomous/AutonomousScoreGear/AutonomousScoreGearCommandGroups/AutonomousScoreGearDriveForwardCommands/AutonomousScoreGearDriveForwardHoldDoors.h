#ifndef AutonomousScoreGearDriveForwardHoldDoors_H
#define AutonomousScoreGearDriveForwardHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousScoreGearDriveForwardHoldDoors: public CommandBase {
public:
	AutonomousScoreGearDriveForwardHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousScoreGearDriveForwardHoldDoors_H
