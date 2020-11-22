#include <cassert>
#include "Elips.h"

Elips::Elips(double r1, double r2)
{
	assert(r1 >= 0 && r2 >= 0);
	radius1 = r1;
	radius2 = r2;
}

void Elips::accept(Visitor& v)
{
	v.visit(*this);
}

void Elips::SetMinorRadius(const double r1)
{
	radius1 = r1;
}

void Elips::SetMajorRadius(const double r2)
{
	radius2 = r2;
}

double Elips::GetMinorRadius() const
{
	return radius1;
}

double Elips::GetMajorRadius() const
{
	return radius2;
}

float Elips::Calculate_area()
{
	return M_PI * radius1 * radius2;
}

Elips::~Elips()
{

}