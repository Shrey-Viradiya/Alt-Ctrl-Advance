#include "UniquePtr.h"
#include "SharedPtr.h"
#include <iostream>

int main() {
	std::cout << "Unique Ptr" << std::endl;
	OperateUniquePtr(5); // in the UniquePtr.h file
	std::cout << "Shared Ptr" << std::endl;
	auto sp = AssignProject(); // in the SharedPtr.h file
}