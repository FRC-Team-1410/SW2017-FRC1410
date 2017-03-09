#ifndef AutonomousUltimateRedDriveToPegHoldDoors_H
#define AutonomousUltimateRedDriveToPegHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedDriveToPegHoldDoors: public CommandBase {
public:
	AutonomousUltimateRedDriveToPegHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedDriveToPegHoldDoors_H
