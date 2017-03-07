#ifndef AutonomousScoreGearDriveForwardDriveWheels_H
#define AutonomousScoreGearDriveForwardDriveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousScoreGearDriveForwardDriveWheels: public CommandBase {
public:
	AutonomousScoreGearDriveForwardDriveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousScoreGearDriveForwardDriveWheels_H
