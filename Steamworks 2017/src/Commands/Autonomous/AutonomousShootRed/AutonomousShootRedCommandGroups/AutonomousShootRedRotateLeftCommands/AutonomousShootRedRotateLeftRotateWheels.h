#ifndef AutonomousShootRedRotateLeftRotateWheels_H
#define AutonomousShootRedRotateLeftRotateWheels_H

#include "../../../../../CommandBase.h"

class AutonomousShootRedRotateLeftRotateWheels: public CommandBase {
public:
	AutonomousShootRedRotateLeftRotateWheels();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousShootRedRotateLeftRotateWheels_H
