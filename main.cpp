#include "Bmpfile.h"

int main() {
	unsigned int width, height;
	unsigned char *bmp = BMPFile::LoadBmp("earth.bmp", width, height);
	BMPFile::SaveBmp("earth_copy.bmp", bmp,width,height);
	return 0;
}
