#include "Vector3d.h"
class Ray {
public:
	Ray(Vector3d origin, Vector3d direction);
	Vector3d origin;
	Vector3d direction;

	Vector3d getOrigin(){}
};