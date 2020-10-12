#include "Curves.h"
#include <cassert>
#include <cmath>
#define M_PI 3.14159265358979323846

Curves::~Curves()
{
}

Circle::Circle(double r)
{
	assert(r >= 0);
	radius = r;
	type = 0;
}

void Circle::SetRadius(const double r)
{
	this->radius = r;
}

double Circle::GetRadius()
{
	return this->radius;
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
	type = 1;
}

void Elips::SetMinorRadius(const double r1)
{
	this->radius1 = r1;
}

void Elips::SetMajorRadius(const double r2)
{
	this->radius2 = r2;
}

double Elips::GetMinorRadius()
{
	return this->radius1;
}

double Elips::GetMajorRadius()
{
	return this->radius2;
}

Elips::~Elips()
{

}

float Elips::Calculate_area()
{
	return M_PI * radius1 * radius2;
}
