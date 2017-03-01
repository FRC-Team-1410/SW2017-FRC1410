#ifndef AutoTestShootObtainSpeedSpinUp_H
#define AutoTestShootObtainSpeedSpinUp_H

#include "../../../../../CommandBase.h"

class AutoTestShootObtainSpeedSpinUp: public CommandBase {
public:
	AutoTestShootObtainSpeedSpinUp();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // AutoTestShootObtainSpeedSpinUp_H
