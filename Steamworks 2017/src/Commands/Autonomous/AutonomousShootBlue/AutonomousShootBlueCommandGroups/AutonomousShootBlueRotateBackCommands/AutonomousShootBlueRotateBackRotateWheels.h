#ifndef AutonomousShootBlueRotateBackRotateWheels_H
#define AutonomousShootBlueRotateBackRotateWheels_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueRotateBackRotateWheels: public CommandBase {
public:
	AutonomousShootBlueRotateBackRotateWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueRotateBackRotateWheels_H
