#ifndef TeleOpGearOpenTopFlap_H
#define TeleOpGearOpenTopFlap_H

#include "../../../CommandBase.h"

class TeleOpGearOpenTopFlap: public CommandBase {
public:
	TeleOpGearOpenTopFlap();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	bool move_forward;
};

#endif  // TeleOpGearOpenTopFlap_H
