#ifndef TeleOpGearFlipFlopTheFloppyDoors_h
#define TeleOpGearFlipFlopTheFloppyDoors_H

#include "../../../CommandBase.h"

class TeleOpGearFlipFlopTheFloppyDoors: public CommandBase {
public:
	TeleOpGearFlipFlopTheFloppyDoors();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	bool move_forward;
};

#endif  // TeleOpGearFlipFlopTheFloppyDoors_H
