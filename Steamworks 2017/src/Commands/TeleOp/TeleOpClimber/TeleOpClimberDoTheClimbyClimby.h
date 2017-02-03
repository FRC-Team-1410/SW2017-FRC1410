#ifndef TeleOpClimberDoTheClimbyClimby_H
#define TeleOpClimberDoTheClimbyClimby_H

#include "../../../CommandBase.h"

class TeleOpClimberDoTheClimbyClimby: public CommandBase {
public:
	TeleOpClimberDoTheClimbyClimby();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // TeleOpClimberDoTheClimbyClimby_H
