#ifndef PRACTICAL_TASK_INCLUDE_CalculateArea_H_
#define PRACTICAL_TASK_INCLUDE_CalculateArea_H_

#include <Circle.h>
#include <Elips.h>

class CalculateArea : public Visitor {
public:

public:
	float calculateArea(Circle& ref) override {
		return M_PI * ref.GetRadius() * ref.GetRadius();
	}
	float calculateArea(Elips& ref) override {
		return M_PI * ref.GetMinorRadius() * ref.GetMajorRadius();
	}
};

#endif  // PRACTICAL_TASK_INCLUDE_CalculateArea_H_