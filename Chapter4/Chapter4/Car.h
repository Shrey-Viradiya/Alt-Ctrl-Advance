#pragma once
class Car
{
private:
	int passanger;
	int speed;
	double fuel;
	
public:
	Car();
	Car(int fuelAmount);
	~Car();
	void FillFuel(double amount);
	void Accelerate();
	void Brake();
	void AddPassanger(int count);
	void DashBoard();
};

