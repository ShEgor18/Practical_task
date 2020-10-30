#ifndef PRACTICAL_TASK_INCLUDE_Elips_H_
#define PRACTICAL_TASK_INCLUDE_Elips_H_

#include "Curves.h"

class Elips : public Curves
{
private:
    double radius1, radius2;
public:
    Elips(double r1, double r2);
    void SetMinorRadius(const double r1);
    void SetMajorRadius(const double r2);
    double GetMinorRadius() const;
    double GetMajorRadius() const;
    ~Elips();
    float Calculate_area();
};

#endif  // PRACTICAL_TASK_INCLUDE_Elips_H_