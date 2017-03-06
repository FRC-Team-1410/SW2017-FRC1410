#ifndef AutonomousShootBlueRotateLeftRotateWheels_H
#define AutonomousShootBlueRotateLeftRotateWheels_H

#include "../../../../../CommandBase.h"

class AutonomousShootBlueRotateLeftRotateWheels: public CommandBase {
public:
	AutonomousShootBlueRotateLeftRotateWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootBlueRotateLeftRotateWheels_H
