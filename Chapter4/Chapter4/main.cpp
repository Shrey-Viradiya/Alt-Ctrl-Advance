#include "Car.h"
#include "Integer.h"
#include "House.h"
#include "BubbleGum.h"
#include <iostream>

// Use of structure

void PrintPoint(int x1, int y1, int x2, int y2) {
	using namespace std;
	cout << "First Point is : ( " << x1 << ", " << y1 << " )." << endl;
	cout << "Second Point is : ( " << x2 << ", " << y2 << " )." << endl;
}

struct Point {
	int x;
	int y;
};

void PrintPoint(Point p1, Point p2) {
	using namespace std;
	cout << "First Point is : ( " << p1.x << ", " << p1.y << " )." << endl;
	cout << "Second Point is : ( " << p2.x << ", " << p2.y << " )." << endl;
}

Integer Add(Integer a, Integer b) {
	Integer temp;
	temp.setValue(a.getValue() + b.getValue());
	return temp;
}

// main driver code

int main() {
	using namespace std;
	//Classes

	Car car2;
	Car car(50);
	car.FillFuel(50);
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.DashBoard();
	Car::showCount();

	// Strutures
	//Point p1{ 3,5 };
	//Point p2{ 5,6 };
	//PrintPoint(p1, p2);

	//// Constant member function
	const Car c2;
	c2.DashBoard(); // can be done as non of the members are modified
	//c2.Accelerate(); // Can't be done as member(s) is(are) modified.
	Car::showCount();

	// Copy contructor example
	Integer i1;
	Integer i2(4);

	//i1 = i2;

	// Delegating Constructor(C++11)
	House h1;
	h1.displayHouse();


	// Default and Deleted Functions
	BubbleGum b1(2,5);
	BubbleGum b2;

	//BubbleGum b3(b1); // can not create the BubbleGum Object as copy constructor is deleted
	b2.SetSweet(10);
	//b2.SetSweet(10.2f); // can not pass float as the function is deleted


	// move semantics
	Integer a(10), b(20), c;
	c.setValue(Add(a, b).getValue());
	
	return 0;
}