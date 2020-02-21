#include <iostream>
using namespace std;
#include "Vector3d.h"
#include "Bmpfile.h"
#include "Scene.h"
#include "Ray.h"
#include "Sphere.h"
#include<string>
#include<iostream>

using namespace std;


int main()
{

    Sphere *pSphere;

    pSphere = new Sphere(Vector3d(0, 0, -20), 1.0f);

    Scene S1;
    S1.Raytrace("test1.bmp", 1920, 1920);
    S1.AddObject(pSphere);

    return 0;
}





