#ifndef TeleOpShooterSpinUp_H
#define TeleOpShooterSpinUp_H

#include "../../../CommandBase.h"

class TeleOpShooterSpinUp: public CommandBase {
public:
	TeleOpShooterSpinUp();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // TeleOpShooterSpinUp_H
