#ifndef TeleOpAgitate_H
#define TeleOpAgitate_H

#include "../../../CommandBase.h"

class TeleOpHopperAgitateBalls: public CommandBase {
public:
	TeleOpHopperAgitateBalls();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif
