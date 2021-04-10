#pragma once
#include<iostream>
using namespace std;

enum class Colour
{
	RED, GREEN, BLUE
};

enum class TrafficLight
{
	RED = 100, YELLOW, GREEN
};

void FillColour(Colour c) {
	if (c == Colour::RED) {
		cout << "RED" << endl;
	}
	else if (c == Colour::GREEN)
	{
		cout << "GREEN" << endl;
	}
	else if (c == Colour::BLUE) {
		cout << "BLUE" << endl;
	}
}