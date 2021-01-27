#include "Car.h"
#include <iostream>

int Car::totalCar{ 0 };

Car::Car() {
	++totalCar;
}

Car::Car(int fuelAmount)
{
	++totalCar;
	std::cout << "Car(int fuelAmount)" << std::endl;
	//passanger = 0;
	fuel = fuelAmount;
	//speed = 0;
}

Car::~Car()
{
	--totalCar;
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

void Foo(const Car &car) {

}

void Car::AddPassanger(int passanger)
{
	this->passanger = passanger;
	Foo(*this);
}

void Car::DashBoard()const {
	std::cout << "Car" << std::endl;
	std::cout << "Passanger: " << passanger << std::endl;
	std::cout << "Speed: " << speed << std::endl;
	std::cout << "Fuel: " << fuel << std::endl;
}

void Car::showCount()
{
	std::cout << "Total Cars: " << totalCar << std::endl;
}
