#include "Ray.h"
#include "Vector3d.h"
class Object3D
{
protected:
	Vector3d center;
	Vector3d color;

public:
	Object3D(Vector3d center_p, Vector3d color_p );
	~Object3D();
	 float getIntersectionDistance(Ray incidentRay) = 0;
};

class Sphere : public Object3D {
private:
	float R;
public:
	Sphere(Vector3d center_p, float R_p, Vector3d color_p = Vector3d(0, 0, 255));
	float getIntersectionDistance(Ray incidentRay);
};