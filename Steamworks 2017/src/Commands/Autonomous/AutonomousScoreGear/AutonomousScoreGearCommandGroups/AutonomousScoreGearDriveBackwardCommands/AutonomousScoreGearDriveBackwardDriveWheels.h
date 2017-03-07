#ifndef AutonomousScoreGearDriveBackwardDriveWheels_H
#define AutonomousScoreGearDriveBackwardDriveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousScoreGearDriveBackwardDriveWheels: public CommandBase {
public:
	AutonomousScoreGearDriveBackwardDriveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousScoreGearDriveBackwardDriveWheels_H
