#pragma once
class Car
{
private:
	// Not-static Data Member Initializer (C++11)
	int passanger{ 0 };
	int speed{ 0 };
	double fuel{ 0 };

	// static class member
	static int totalCar;
	
public:
	Car();
	Car(int fuelAmount);
	~Car();
	void FillFuel(double amount);
	void Accelerate();
	void Brake();
	void AddPassanger(int count);
	void DashBoard()const;
	
	//static class methods
	static void showCount();
};

