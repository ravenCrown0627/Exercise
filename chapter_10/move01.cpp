#include<iostream>
#include "move00.h"

using std::cout;
using std::endl;

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x-value: " << this->x << endl;
	cout << "y-value: " << this->y << endl;
}

Move Move::add(const Move& m) const
{
	return Move(x + m.x, y + m.y);
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}