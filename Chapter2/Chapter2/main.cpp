#include <iostream>
#include "functions.h"
using namespace std;

int Add(int a, int b);

void Print(char a) {
	for (int i = 0; i < 10; i++)
	{
		cout << a;
	}
	cout << endl;
}

double Add(double a, double b) {
	return a + b;
}

void createWindow(const char *title, int x = -1, int y = -1, int width = -1, int height = -1) {
	cout << title << endl;
	cout << x << endl;
	cout << y << endl;
	cout << width << endl;
	cout << height << endl;
}

int main() {
	// Basic Output

	//cout << "Hello Visual Studio! " << endl;
	//
	//int i = 10;

	//cout << "The value of i is: " << i << endl;

	// Uniform initialization
	
	//int ja{ 10 };
	//int ab[]{ 10,20,20,30 };
	//int ba[8]{};
	//
	//int *pe = new int[] { 58,58,6,2 };
	//char *name_abc = new char[] {"Shrey Viradiya"};

	//cout << "The value of j is: " << j << endl;

	// Basic Input

	//cout << "Enter the value of i:" << endl;
	//cin >> i;
	//cout << "The value of i is : " << i << endl;


	// Input with strings

	//char name[50];
	//cout << "Please enter you name: " << endl;
	//cin.getline(name,50,'\n');
	//cout << "Hello, "  << name << endl;


	// Functions Basics

	//int a, b, c;
	//
	//cout << "Enter the value of a b:" << endl;
	//cin >> a >> b;
	//
	//int sum = Add(a, b);
	//cout << "Sum is " << sum << endl;

	//Print('a');

	//cout << "Enter the value of a b c:" << endl;
	//cin >> a >> b >> c;
	//double mn = mean(a, b, c);
	//cout << mn;

	//Pointers

	//int x = 5;
	//int *ptr = &x;
	//cout << &x << endl;
	//cout << ptr << endl;
	//*ptr = 10;
	//cout << x << endl;

	//int *ptr2 = nullptr;

	//Refereneces

	//int xy = 5;
	//int &ref = xy;
	//cout << xy << endl;
	//cout << ref << endl;
	//ref = 15;
	//cout << xy << endl;
	//cout << ref << endl;

	//const Qualifier

	//const float PI = 3.1415926535898f;
	//int radius = 15;
	//cout << "The area of the circle is : " << PI * radius*radius << endl;

	// auto keyword

	//auto num1 = 5;
	//auto num2 = 10;
	//auto sum1 = num1 + num2;

	//auto sum2 = num1 + 4.2f;
	//auto mean1 = mean(15, 15, 15);
	//const int num4 = 10;
	//auto var1 = num4;
	//const auto var2 = num4;

	// Range based for loop

	//int list1[] = { 1,2,3,4,5 };
	//for (int k = 0; k < 5; k++) {
	//	cout << list1[k] << " ";
	//}
	//cout << endl;

	//for (auto x : list1)
	//	cout << x << " ";
	//cout << endl;

	// Function Overloading
	
	//cout << Add(3, 5) << endl;
	//cout << Add(3.1, 5.6) << endl;
	
	//Default Function Argumnets
	createWindow("Window 1", 100,200,300,400);
	createWindow("Window 2");

return 0;
}

int Add(int a, int b){
	return a + b;
}