#include<iostream>
#include "move00.h"

using namespace std;

int main()
{
	cout << "Create an object of Move" << endl;
	Move obj(5, 5);
	obj.showmove();
	cout << "Create another oject" << endl;
	Move obj1(6, 8);
	obj1.showmove();
	cout << "Add 2 objects to contruct a new one" << endl;
	Move new_obj = obj1.add(obj);
	new_obj.showmove();
	cout << "Reset the value of obj1" << endl;
	obj1.reset();
	obj1.showmove();

	return 0;
}