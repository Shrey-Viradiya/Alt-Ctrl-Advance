#include<iostream>
#include<sstream>
#include "Enums.h"
#include "CStyleStrings.h"
#include "StringExamples.h"

using namespace std;

constexpr int getNumber() {
	return 42;
}

constexpr int Add(int x, int y) {
	return x + y;
}

constexpr int Max(int x, int y) {
	return x > y ? x : y;
}

int main() {
	// Enums
	/*Colour c = Colour::RED;
	FillColour(c);
	FillColour(Colour::BLUE);

	cout << static_cast<int>(TrafficLight::YELLOW) << endl;*/

	// C Style Strings (Raw Strings)
	/*char fname[10], lname[10];
	cin.getline(fname, 10);
	cin.getline(lname, 10);

	const char* fullname = Combine(fname, lname);

	cout << fullname << endl;
	delete[] fullname;*/

	//Strings

	//StringDemo();

	//string fn, ln;
	//cin >> fn >> ln;
	//string full = fn + " " + ln;
	//cout << full << endl;
	

	// sstream
	//int a1{ 1 }, b1{ 2 };
	//int sum1 = a1 + b1;
	//stringstream ss;
	//ss << "Sum of " << a1 << " & " << b1 << " is " << sum1;
	//string s1 = ss.str();
	//cout << s1 << endl;
	//ss.str("");
	//string data = "10 20 30";
	//int al;
	//stringstream ss2;
	//ss2.str(data);

	//while (ss2 >> al)
	//{
	//	cout << al << endl;
	//}

	// ConstExpr
	constexpr int iiii = getNumber();
	int arrsdfsdf[iiii];

	const int asfas = getNumber();
	int arrasda[asfas];

	int x2e = getNumber();

	int sum134 = Add(3, 5);
	int maxee = Max(5, 3);
	return 0;
}