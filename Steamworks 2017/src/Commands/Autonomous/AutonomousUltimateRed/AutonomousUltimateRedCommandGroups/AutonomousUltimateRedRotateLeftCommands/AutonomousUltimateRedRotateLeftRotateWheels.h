#ifndef AutonomousUltimateRedRotateLeftRotateWheels_H
#define AutonomousUltimateRedRotateLeftRotateWheels_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedRotateLeftRotateWheels: public CommandBase {
public:
	AutonomousUltimateRedRotateLeftRotateWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedRotateLeftRotateWheels_H
