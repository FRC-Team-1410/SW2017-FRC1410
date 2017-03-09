#ifndef AutonomousUltimateRedRotateToPegRotateWheels_H
#define AutonomousUltimateRedRotateToPegRotateWheels_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedRotateToPegRotateWheels: public CommandBase {
public:
	AutonomousUltimateRedRotateToPegRotateWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedRotateToPegRotateWheels_H
