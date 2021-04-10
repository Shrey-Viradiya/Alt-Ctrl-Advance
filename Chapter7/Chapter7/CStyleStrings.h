#pragma once
#include <iostream>
#include <cstring>

const char* Combine(const char* fname, const char* lname) {
	char* fullname = new char[strlen(fname) + strlen(lname) + 2];
	strcpy(fullname, fname);
	strcat(fullname, " ");
	strcat(fullname, lname);
	return fullname;
}