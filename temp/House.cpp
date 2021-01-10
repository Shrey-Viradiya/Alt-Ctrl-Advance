#include "House.h"
#include <iostream>

House::House():House(0)
{
}

House::House(int persons):House(persons, 2)
{
}

House::House(int persons, int rooms)
{
	this->persons = persons;
	this->rooms = rooms;
}

void House::displayHouse()
{
	std::cout << "House" << std::endl;
	std::cout << "Rooms: " << rooms << std::endl;
	std::cout << "Persons: " << persons << std::endl;
	std::cout << "Documentation: " << documentation << std::endl;
}

House::~House()
{
}
