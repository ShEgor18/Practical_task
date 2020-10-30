#ifndef PRACTICAL_TASK_INCLUDE_Circle_H_
#define PRACTICAL_TASK_INCLUDE_Circle_H_

#include "Curves.h"

class Circle : public Curves
{
private:
    double radius;
public:
    Circle(double r);
    void SetRadius(const double r);
    double GetRadius() const;
    ~Circle();
    float Calculate_area();
};

#endif  // PRACTICAL_TASK_INCLUDE_Circle_H_