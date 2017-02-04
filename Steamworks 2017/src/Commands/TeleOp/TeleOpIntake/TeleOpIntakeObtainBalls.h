#ifndef TeleOpIntakeObtainBalls_H
#define TeleOpIntakeObtainBalls_H

#include "../../../CommandBase.h"

class TeleOpIntakeObtainBalls: public CommandBase {
public:
	TeleOpIntakeObtainBalls();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // TeleOpIntakeObtainBalls_H
