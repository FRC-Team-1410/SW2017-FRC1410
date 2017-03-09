#ifndef AutonomousUltimateRedOpenDoorsRotateHinges_H
#define AutonomousUltimateRedOpenDoorsRotateHinges_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedOpenDoorsRotateHinges: public CommandBase {
public:
	AutonomousUltimateRedOpenDoorsRotateHinges();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedOpenDoorsRotateHinges_H
