#include "GetType.h"

void GetType::visit(Circle& ref) {
	type = "Circle";
}
void GetType::visit(Elips& ref) {
	type = "Elips";
}

