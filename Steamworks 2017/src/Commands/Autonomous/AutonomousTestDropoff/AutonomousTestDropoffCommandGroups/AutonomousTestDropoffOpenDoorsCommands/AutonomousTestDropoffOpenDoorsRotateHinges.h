#ifndef AutonomousTestDropoffOpenDoorsRotateHinges_H
#define AutonomousTestDropoffOpenDoorsRotateHinges_H

#include "../../../../../CommandBase.h"

class AutonomousTestDropoffOpenDoorsRotateHinges: public CommandBase {
public:
	AutonomousTestDropoffOpenDoorsRotateHinges();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // AutonomousTestDropoffOpenDoorsRotateHinges_H
