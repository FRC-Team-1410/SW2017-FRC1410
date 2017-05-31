#ifndef TeleOpGearIntakeSpinWheels_H
#define TeleOpGearIntakeSpinWheels_H

#include "../../../CommandBase.h"

class TeleOpGearIntakeSpinWheels: public CommandBase {
public:
	TeleOpGearIntakeSpinWheels(float input_speed);
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	float speed;
};

#endif  // TeleOpGearIntakeSpinWheels_H
