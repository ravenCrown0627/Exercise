#include <iostream>
#include <cstring>
#include "golf.h"

using std::cout;
using std::cin;

//function defination
void setgolf(golf& g, const char* name, int hc)
{
	cout << "Fill in the name and handicap implicitly\n";
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	cout << "Name: ";

	char temp[Len];
	std::cin.get(temp, Len - 1);

	if (temp[0] == '\0')
	{
		cout << "No data entered\n";
		strcpy_s(g.fullname, "No name");
		g.handicap = NULL;
		cin.clear();
		return 0;
	} 
	else
	{
		strcpy_s(g.fullname, temp);
		cout << "Handicap: ";
		cin >> g.handicap;
		return 1;
	}
}

void handicap(golf& g, int hc)
{
	if (g.handicap != NULL)
		g.handicap = hc;
}

void showgolf(const golf& g)
{
	if (g.fullname[0] != '\n')
		cout << "Name: " << g.fullname << "\tHandicap: " << g.handicap;
}