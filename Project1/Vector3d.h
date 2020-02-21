#pragma once
#include <iostream>

using namespace std;

class Vector3d
{
	public:
		Vector3d(float x = 0, float y = 0, float z = 0);
		Vector3d(const Vector3d& vref);
		Vector3d multiply(Vector3d v2);
		Vector3d operator+(Vector3d v2);


		friend ostream& operator << (ostream& out, const Vector3d& c);
		friend istream& operator >> (istream& in, Vector3d& c);
	
	public:
		float x, y, z;
};

