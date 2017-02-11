#ifndef TeleOpIntakeObtainTallywags_H
#define TeleOpIntakeObtainTallywags_H

#include "../../../CommandBase.h"

class TeleOpIntakeObtainTallywags: public CommandBase {
public:
	TeleOpIntakeObtainTallywags();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // TeleOpIntakeObtainTallywags_H
