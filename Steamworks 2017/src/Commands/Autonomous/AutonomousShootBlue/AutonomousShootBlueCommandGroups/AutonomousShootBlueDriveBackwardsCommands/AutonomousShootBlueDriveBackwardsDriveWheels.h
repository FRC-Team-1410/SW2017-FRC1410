#ifndef AutonomousShootBlueDriveBackwardsDriveWheels_H
#define AutonomousShootBlueDriveBackwardsDriveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueDriveBackwardsDriveWheels: public CommandBase {
public:
	AutonomousShootBlueDriveBackwardsDriveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueDriveBackwardsDriveWheels_H
