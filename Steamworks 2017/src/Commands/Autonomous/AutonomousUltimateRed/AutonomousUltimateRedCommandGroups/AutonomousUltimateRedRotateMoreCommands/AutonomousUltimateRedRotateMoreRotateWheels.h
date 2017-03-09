#ifndef AutonomousUltimateRedRotateMoreRotateWheels_H
#define AutonomousUltimateRedRotateMoreRotateWheels_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedRotateMoreRotateWheels: public CommandBase {
public:
	AutonomousUltimateRedRotateMoreRotateWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedRotateMoreRotateWheels_H
