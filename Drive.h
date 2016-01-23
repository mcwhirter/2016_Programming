#ifndef DRIVE_H__INCLUDED
#define DRIVE_H__INCLUDED


#include "WPILib.h"
#include "Config.h"


class Drive{
public:
	Drive(void);
	~Drive(void);
	
	void SetMotors(float, float, bool);
	
private:
	Talon *FrontLeft, *FrontRight, *BackLeft, *BackRight;
};


#endif /* DRIVE_H__INCLUDED */
