#ifndef AutonomousShootRedDriveBackwardsDriveWheels_H
#define AutonomousShootRedDriveBackwardsDriveWheels_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedDriveBackwardsDriveWheels: public CommandBase {
public:
	AutonomousShootRedDriveBackwardsDriveWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedDriveBackwardsDriveWheels_H
