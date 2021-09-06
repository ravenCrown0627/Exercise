#include "plorg.h"

int main()
{
	Plorg item1;
	item1.show();
	Plorg item2("Maria", 61);
	item2.show();
	Plorg item3("Avatar", 23);
	item3.show();
	item3.changeCI(78);
	item3.show();

	return 0;
}