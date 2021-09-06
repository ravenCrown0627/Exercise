#include<iostream>
#include<cstring>
#include "plorg.h"

using std::cout;
using std::endl;

Plorg::Plorg(const char* name, int i)
{
	strncpy_s(fullname, name, Len);
	ci = i;
}

void Plorg::changeCI(int i)
{
	ci = i;
}

void Plorg::show()
{
	cout << "Fullname: " << fullname << endl;
	cout << "Contentment index: " << ci << endl;
}