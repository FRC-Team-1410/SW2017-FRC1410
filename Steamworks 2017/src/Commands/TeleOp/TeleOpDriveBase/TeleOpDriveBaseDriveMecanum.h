#ifndef TeleOpDriveBaseDriveMecanum_H
#define TeleOpDriveBaseDriveMecanum_H

#include "../../../CommandBase.h"

class TeleOpDriveBaseDriveMecanum: public CommandBase {
public:
	TeleOpDriveBaseDriveMecanum();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // TeleOpDriveBaseDriveMecanum_H
