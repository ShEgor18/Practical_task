#ifndef PRACTICAL_TASK_INCLUDE_Curves_H_
#define PRACTICAL_TASK_INCLUDE_Curves_H_

#define _USE_MATH_DEFINES
#include <cmath>

class Curves
{
public:
    virtual float Calculate_area() = 0;
    virtual ~Curves();
};

#endif  // PRACTICAL_TASK_INCLUDE_Curves_H_