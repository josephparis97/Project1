#include "Scene.h"
#include "Bmpfile.h"
#include <string>


void Scene::Raytrace(std::string fileName, unsigned int width, unsigned int height) {
	unsigned char *buffer = new unsigned char[width * height * 3];
	for (int x = 0; x < width; x++)
		for (int y = 0; y < height; y++) {
			unsigned int idx = (x * width + y) * 3;
			buffer[idx] = 0;
			buffer[idx+1] = 100;
			buffer[idx+2] = 255;
		}
	BMPFile::SaveBmp(fileName, buffer, width, height);
}
