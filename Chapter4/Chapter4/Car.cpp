#include "Car.h"
#include <iostream>

Car::Car()
{
	std::cout << "Car()" << std::endl;
	passanger = 0;
	fuel = 0;
	speed = 0;
}

Car::Car(int fuelAmount)
{
	std::cout << "Car(int fuelAmount)" << std::endl;
	passanger = 0;
	fuel = fuelAmount;
	speed = 0;
}

Car::~Car()
{
	// Destructor
	std::cout << "~Car()" << std::endl;
}

void Car::FillFuel(double amount)
{
	fuel = amount;
}

void Car::Accelerate()
{
	speed += 10;
	fuel -= 0.5;
}

void Car::Brake()
{
	speed = 0;
}

void Car::AddPassanger(int count)
{
	passanger = count;
}

void Car::DashBoard()
{
	std::cout << "Car" << std::endl;
	std::cout << "Passanger: " << passanger << std::endl;
	std::cout << "Speed: " << speed << std::endl;
	std::cout << "Fuel: " << fuel << std::endl;
}
