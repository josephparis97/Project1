#include "stdafx.h"
#include "DirectionalLight.h"


DirectionalLight::DirectionalLight(Vector3 direction, Colorf color) : direction(direction.normalize()), color(color)
{
}


DirectionalLight::~DirectionalLight()
{
}

Vector3 DirectionalLight::GetDirection() const
{
	return direction;
}

Colorf DirectionalLight::GetColor() const
{
	return color;
}
