#ifndef PRACTICAL_TASK_INCLUDE_GetType_H_
#define PRACTICAL_TASK_INCLUDE_GetType_H_
#include <string>
#include <Circle.h>
#include <Elips.h>

class GetType : public Visitor {
public:
	std::string type;

	void visit(Circle &ref) override;
	void visit(Elips  &ref) override;
};

#endif  // PRACTICAL_TASK_INCLUDE_GetType_H_