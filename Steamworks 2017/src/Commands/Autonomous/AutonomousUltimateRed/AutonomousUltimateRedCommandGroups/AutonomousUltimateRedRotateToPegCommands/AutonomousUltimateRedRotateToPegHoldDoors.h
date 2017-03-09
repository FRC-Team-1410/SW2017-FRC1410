#ifndef AutonomousUltimateRedRotateToPegHoldDoors_H
#define AutonomousUltimateRedRotateToPegHoldDoors_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedRotateToPegHoldDoors: public CommandBase {
public:
	AutonomousUltimateRedRotateToPegHoldDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedRotateToPegHoldDoors_H
