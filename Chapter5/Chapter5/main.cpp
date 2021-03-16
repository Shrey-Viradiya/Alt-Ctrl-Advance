#include<iostream>
#include<memory>
#include"Integer.h"

Integer operator +(int a, const Integer& b) {
	return Integer(a + b.getValue());
}

std::ostream& operator << (std::ostream & out, const Integer& a) {
	out << a.getValue();
	return out;
}

std::istream & operator >> (std::istream & inp, Integer& a) {
	int x;
	std::cin >> x;
	*a.m_pInt = x;
	return inp;
}

// Smart pointers
void pvalue(std::unique_ptr<Integer> p) {
	std::cout << p->getValue() << std::endl;
}

void pvalue(std::shared_ptr<Integer> p) {
	std::cout << p->getValue() << std::endl;
}

class IntPtr {
	Integer* m_p;
public:
	IntPtr(Integer* p) : m_p(p) {

	}
	~IntPtr() {
		delete m_p;
	}

	Integer* operator ->() {
		return m_p;
	}

	Integer& operator *() {
		return *m_p;
	}
};

int main() {
	using namespace std;

	/*Integer a(5), b(10);
	cout << a.getValue() << endl;
	cout << b.getValue() << endl;

	Integer sum = a + b;
	cout << (sum++).getValue() << endl;

	sum = sum;
	cout << sum.getValue() << endl;

	sum = 5 + a;
	cout << sum << endl;

	cin >> b;
	cout << b << endl;*/

	// Smart Pointer
	/*IntPtr p = new Integer;
	p->setValue(5);
	cout << p->getValue() << endl;*/

	// Smart pointer with CPP library
	//unique_ptr<Integer> p(new Integer);
	////auto p2(p);	//will not work as copy constructor is deleted in unique_ptr
	//p->setValue(5);
	////pvalue(p); // will not work as a copy of unique_ptr is to be made
	//pvalue(move(p));

	//shared_ptr<Integer> q(new Integer);
	//q->setValue(15);
	//pvalue(q);
	//cout << q->getValue() << endl;

	// type casting
	int a = 5, b = 2;
	float c = a;
	float d = a / b;
	float e = (float)a / b;
	float f = static_cast<float>(a) / b;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;

	char* pr = reinterpret_cast<char*>(&a);
	const int x = 1;
	int* pr2 = const_cast<int*>(&x);
	cout << *pr << " " << *pr2 << endl;

	Integer ab{ 5 };
	Integer cd = 10;

	int k = ab;
	return 0;
}