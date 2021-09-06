#include <iostream>
#include "sales.h"

using namespace SALES;

int main()
{
	const int arrSize = 3;
	double arr[arrSize] = { 23.12, 235.33, 121.1 };

	Sales andy;

	//V1
	setSales(andy, arr, arrSize);
	showSales(andy);
	std::cout << std::endl;

	Sales ben;

	//V2
	setSales(ben);
	std::cout << std::endl;
	showSales(ben);

}