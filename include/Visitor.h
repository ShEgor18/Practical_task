#ifndef PRACTICAL_TASK_INCLUDE_Visitor_H_
#define PRACTICAL_TASK_INCLUDE_Visitor_H_

class Circle;
class Elips;
#include <string>

class Visitor {
public:
	virtual void visit(Circle &ref) = 0;
	virtual void visit(Elips  &ref) = 0;

	virtual ~Visitor() = default;
};

#endif  // PRACTICAL_TASK_INCLUDE_Visitor_H_