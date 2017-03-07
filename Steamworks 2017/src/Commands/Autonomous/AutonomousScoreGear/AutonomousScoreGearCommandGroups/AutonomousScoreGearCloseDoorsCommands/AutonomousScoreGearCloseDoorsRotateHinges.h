#ifndef AutonomousScoreGearCloseDoorsRotateHinges_H
#define AutonomousScoreGearCloseDoorsRotateHinges_H

#include "../../../../../CommandBase.h"

class AutonomousScoreGearCloseDoorsRotateHinges: public CommandBase {
public:
	AutonomousScoreGearCloseDoorsRotateHinges();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousScoreGearCloseDoorsRotateHinges_H
