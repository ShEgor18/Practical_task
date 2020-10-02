#include "Curves.h"
#include <cassert>
#include <cmath>
#define M_PI 3.14159265358979323846

Circle::Circle(double r)
{
	assert(r >= 0);
	radius = r;
}

Circle::~Circle()
{
	
}

float Circle::Calculate_area()
{
	return M_PI * radius * radius;
}

Elips::Elips(double r1, double r2)
{
	assert(r1 >= 0 && r2 >= 0);
	radius1 = r1;
	radius2 = r2;
}

Elips::~Elips()
{
}

float Elips::Calculate_area()
{
	return M_PI * radius1 * radius2;
}
