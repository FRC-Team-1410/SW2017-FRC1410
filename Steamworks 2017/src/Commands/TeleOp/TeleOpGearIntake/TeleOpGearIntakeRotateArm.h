#ifndef TeleOpGearIntakeRotateArm_H
#define TeleOpGearIntakeRotateArm_H

#include "../../../CommandBase.h"

class TeleOpGearIntakeRotateArm: public CommandBase {
public:
	TeleOpGearIntakeRotateArm();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // TeleOpGearIntakeRotateArm_H
