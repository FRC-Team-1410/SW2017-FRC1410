#ifndef AutonomousDriveBaseDriveStraight_H
#define AutonomousDriveBaseDriveStraight_H

#include "../../../CommandBase.h"

class AutonomousDriveBaseDriveStraight: public CommandBase {
public:
	AutonomousDriveBaseDriveStraight();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // AutonomousDriveBaseDriveStraight_H
