#ifndef _ROBOT_LEG_H_
#define _ROBOT_LEG_H_

#include "../VectorLib/Vector.h"

class RobotLeg
{
public:
	void setFoot(const Vector3d& endEffector);
	void getEnvelope();
};

#endif // _ROBOT_LEG_H_
