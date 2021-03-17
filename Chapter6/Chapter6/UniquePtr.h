#pragma once
#include "Integer.h"
#include <memory>

void Display(Integer* p) {
	if (!p)
	{
		return;
	}
	std::cout << p->getValue() << std::endl;
}

Integer* GetPointer(int value) {
	Integer* p = new Integer{ value };
	return p;
}

void Store(std::unique_ptr<Integer>& p) {
	std::cout << "Storing data into file: " << p->getValue() << std::endl;
}

void OperateUniquePtr(int value) {
	std::unique_ptr<Integer> p{ GetPointer(value) };
	if (p == nullptr)
	{
		p.reset(new Integer{ value });
	}
	p->setValue(100);
	Display(p.get());

	p.reset(new Integer{});
	*p = __LINE__;
	Display(p.get());
	Store(p);
	*p = 200;
}