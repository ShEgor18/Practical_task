#include <cassert>
#include "Circle.h"

Circle::Circle(double r)
{
	assert(r >= 0);
	radius = r;
}

void Circle::SetRadius(const double r)
{
	this->radius = r;
}

double Circle::GetRadius() const
{
	return this->radius;
}

float Circle::Calculate_area()
{
	return M_PI * radius * radius;
}

Circle::~Circle()
{

}