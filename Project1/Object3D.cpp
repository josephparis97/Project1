#include "Object3D.h"
#include "Ray.h"

Object3D::Object3D(Vector3d center_p, Vector3d color_p) {
	center = center_p;
	color = color_p;
}

Sphere::Sphere(Vector3d center_p, float R_p, Vector3d color_p)
	:Object3D(center_p, color_p), R(R_p) {}


float Sphere::getIntersectionDistance(Ray incidentRay) {
		//Point
		Vector3d src_point = incidentRay.getOrigin();

		//Vector
		Vector3d dir = incidentRay.getOrigin();

		//t-computing
		Vector3d sphere_to_point = src_point-center;

		float a = 1;
		float b = 2 * (dir.dot(sphere_to_point));
		float c = sphere_to_point.dot(sphere_to_point) - pow(R,2);
	