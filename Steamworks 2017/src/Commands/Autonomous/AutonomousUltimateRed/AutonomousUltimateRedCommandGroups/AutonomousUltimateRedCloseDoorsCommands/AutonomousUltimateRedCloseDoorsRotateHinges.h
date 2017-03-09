#ifndef AutonomousUltimateRedCloseDoorsRotateHinges_H
#define AutonomousUltimateRedCloseDoorsRotateHinges_H

#include "../../../../../CommandBase.h"

class AutonomousUltimateRedCloseDoorsRotateHinges: public CommandBase {
public:
	AutonomousUltimateRedCloseDoorsRotateHinges();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
	frc::Timer * timer;
};

#endif  // AutonomousUltimateRedCloseDoorsRotateHinges_H
