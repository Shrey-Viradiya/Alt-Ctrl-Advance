#pragma once
#include <iostream>
#include <string>

using namespace std;

void StringDemo() {
	// Initialization
	string a = "Hello";
	a = "Hello";

	//Access
	a[0] = 'T';
	char ch = a[0];	

	cout << a << endl;
	//cin >> a;

	getline(cin, a);

	// size
	cout << a.length() << endl;

	// Insert and Concatenate
	string s{ "Hello" }, s1{ "World" };
	a = s + s1;
	s += s1;

	s.insert(1, "r");

	// comparision
	if (s == s1) {

	}

	// removal
	s.erase(0, 2);
	s.clear();

	// Search
	auto pos = s.find("World", 0);
	if (pos != string::npos) {
		//found and write some code
	}
}