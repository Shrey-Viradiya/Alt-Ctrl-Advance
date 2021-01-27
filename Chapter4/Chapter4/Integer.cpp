#include "Integer.h"
#include <iostream>
Integer::Integer()
{
	m_pInt = new int{ 0 };
}

Integer::Integer(int value)
{
	m_pInt = new int{ value };
}

Integer::Integer(const Integer & obj)
{
	m_pInt = new int{ obj.getValue() };
}

Integer::Integer(Integer && obj)
{
	using namespace std;
	cout << "Move Semantics" << endl;
	m_pInt = obj.m_pInt;
	obj.m_pInt = nullptr;
}

int Integer::getValue() const
{
	return *m_pInt;
}

void Integer::setValue(int value)
{
	*m_pInt = value;
}

Integer::~Integer()
{
	delete m_pInt;
}
