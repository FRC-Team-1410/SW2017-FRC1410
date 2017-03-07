#ifndef AutonomousScoreGearOpenDoorsRotateHinges_H
#define AutonomousScoreGearOpenDoorsRotateHinges_H

#include "../../../../../CommandBase.h"

class AutonomousScoreGearOpenDoorsRotateHinges: public CommandBase {
public:
	AutonomousScoreGearOpenDoorsRotateHinges();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousScoreGearOpenDoorsRotateHinges_H
