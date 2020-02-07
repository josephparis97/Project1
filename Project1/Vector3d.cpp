#include "Vector3d.h"



Vector3d::Vector3d(float f1, float f2, float f3)
	:x(f1),y(f2),z(f3)
{	
}

Vector3d::Vector3d(const Vector3d& vref)
	:x(vref.x), y(vref.y), z(vref.z)
{
}

Vector3d Vector3d::multiply(Vector3d v2)
{
	Vector3d v3(x*v2.x,y*v2.y,z*v2.z);
	return v3;
}

Vector3d Vector3d::operator+(Vector3d v2)
{
	Vector3d v3(x + v2.x, y + v2.y, z + v2.z);
	return v3;
}

ostream& operator << (ostream& out, const Vector3d& c)
{
	out << c.x << c.y << c.z << endl;
	return out;
}

istream& operator >> (istream& in, Vector3d& c)
{
	in >> c.z;
	in >> c.y;
	in >> c.z;
	return in;
}


	


