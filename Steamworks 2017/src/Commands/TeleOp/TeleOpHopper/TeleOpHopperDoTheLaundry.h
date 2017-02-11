#ifndef TeleOpHopperDoTheLaundry_H
#define TeleOpHopperDoTheLaundry_H

#include "../../../CommandBase.h"

class TeleOpHopperDoTheLaundry: public CommandBase {
public:
	TeleOpHopperDoTheLaundry();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // TeleOpHopperDoTheLaundry_H
