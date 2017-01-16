#ifndef TeleOpGearManipulatorActuateSolenoids_H
#define TeleOpGearManipulatorActuateSolenoids_H

#include "../../../CommandBase.h"

class TeleOpGearManipulatorActuateSolenoids: public CommandBase {
public:
	TeleOpGearManipulatorActuateSolenoids();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	bool move_forward;
};

#endif  // TeleOpGearManipulatorActuateSolenoids_H
