// projet.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Bmpfile.h"
#include "Vector3.h"
#include "Scene.h"
#include "Sphere.h"
#include "DirectionalLight.h"

#include <iostream>
#include "projet.h"

using namespace std;

int main() {
	Scene scene;
	unique_ptr<Sphere> sphere1(new Sphere(Vector3(0, 0, -20), 0.5, Colorf(1, 0, 0)));
	scene.addObject(move(sphere1));
	unique_ptr<Sphere> sphere2(new Sphere(Vector3(-0.4, 0, -20), 0.7, Colorf(0, 0, 1)));
	scene.addObject(move(sphere2));
	//scene.addLight(make_unique<DirectionalLight>(Vector3(0.1, -0.8, -0.5), Colorf(1.0, 1.0, 1.0)));
	scene.addLight(make_unique<DirectionalLight>(Vector3(0, 0, 1), Colorf(1.0, 1.0, 1.0)));
	scene.RayTrace("raytrace.bmp", 800, 800);
	return 0;
}
