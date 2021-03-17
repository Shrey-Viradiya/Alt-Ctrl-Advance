#include "Integer.h"
#include <iostream>

Integer::Integer()
{
	using namespace std;
	cout << "Integer()" << endl;
	m_pInt = new int{ 0 };
}

Integer::Integer(int value)
{
	using namespace std;
	cout << "Integer(int value)" << endl;
	m_pInt = new int{ value };
}

Integer::Integer(const Integer& obj)
{
	using namespace std;
	cout << "Integer(const Integer& obj)" << endl;
	m_pInt = new int{ obj.getValue() };
}

Integer::Integer(Integer&& obj)
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
	using namespace std;
	cout << "~Integer()" << endl;
	delete m_pInt;
}

Integer Integer::operator+(const Integer& a) const
{
	return Integer(a.getValue() + this->getValue());
}

Integer& Integer::operator ++()
{
	++(*m_pInt);
	return *this;
}

Integer Integer::operator ++(int)
{
	Integer temp(*this);
	++(*m_pInt);
	return temp;
}

Integer Integer::operator=(const Integer& a)
{
	if (this != &a) {
		delete m_pInt;
		m_pInt = new int(a.getValue());
	}
	return *this;
}

Integer::operator int()
{
	return *m_pInt;
}
