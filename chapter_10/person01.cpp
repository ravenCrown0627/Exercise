#include <iostream>
#include <cstring>
#include "person00.h"

Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	strncpy_s(fname, fn, LIMIT - 1);
	fname[LIMIT-1] = '\0';
}

void Person::Show() const
{
	std::cout << "Name: " << lname << " " << fname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << "Formal name: " << fname << " " << lname << std::endl;
}