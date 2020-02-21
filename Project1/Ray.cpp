#include "Ray.h"

Ray::Ray(Vector3d origin, Vector3d direction) 
	:origin(origin), direction(direction){}

Vector3d Ray::getOrigin()
{
	return origin;
}