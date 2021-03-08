#include<iostream>
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
	a.setValue(x);
	return inp;
}

int main() {
	using namespace std;

	Integer a(5), b(10);
	cout << a.getValue() << endl;
	cout << b.getValue() << endl;

	Integer sum = a + b;
	cout << (sum++).getValue() << endl;

	sum = sum;
	cout << sum.getValue() << endl;

	sum = 5 + a;
	cout << sum << endl;

	cin >> b;
	cout << b << endl;

	return 0;
}