#ifndef AutonomousShootRedRotateBackRotateWheels_H
#define AutonomousShootRedRotateBackRotateWheels_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedRotateBackRotateWheels: public CommandBase {
public:
	AutonomousShootRedRotateBackRotateWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedRotateBackRotateWheels_H
