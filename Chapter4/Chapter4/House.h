#pragma once

// Delegating Constructor(C++11)

class House
{
public:
	House();
	House(int persons);
	House(int persons, int rooms);
	void displayHouse();
	~House();
private:
	int rooms;
	int persons;
	bool documentation;
};