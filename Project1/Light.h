#pragma once
#include "Vector3.h"
#include "Color.h"

class Light
{
public:
	Light();
	~Light();
	virtual Vector3 GetDirection() const = 0;
	virtual Colorf GetColor() const= 0;
};

