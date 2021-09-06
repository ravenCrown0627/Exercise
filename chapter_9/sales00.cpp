#include <iostream>
#include <cstring>
#include "sales.h"

using namespace SALES;
using std::cin;
using std::cout;
using std::endl;

void SALES::setSales(Sales& s, const double ar[], int n)
{
	double sum = 0;

	n = (n <= QUARTERS) ? n : QUARTERS;
	
	for (int i = 0; i < n; i++)
	{
		s.sales[i] = ar[i];
		sum += s.sales[i];
	}

	s.average = sum / n;

	for (int i = 0; i < n; i++)
	{
		s.max = s.min = s.sales[0];

		if (s.sales[i] > s.max)
			s.max = s.sales[i];
		if (s.sales[i] < s.min)
			s.min = s.sales[i];
	}
}

void SALES::setSales(Sales& s)
{
	int sales_num;
	double sum = 0;
	
	cout << "How many sales going to entered? (Maximum 4) ";
	cin >> sales_num;

	sales_num = (sales_num <= QUARTERS) ? sales_num : QUARTERS;
	
	for (int i = 0; i < sales_num; i++)
	{
		cout << "Enter sales: ";
		cin >> s.sales[i];
		
		sum += s.sales[i];
	}

	s.average = sum / sales_num;

	for (int i = 0; i < sales_num; i++)
	{
		s.max = s.min = s.sales[0];

		if (s.sales[i] > s.max)
			s.max = s.sales[i];
		if (s.sales[i] < s.min)
			s.min = s.sales[i];
	}
}

void SALES::showSales(const Sales& s)
{
	for (int i = 0; i < QUARTERS; i++)
	{
		if (s.sales[i] > 0)
			cout << "sales #" << i + 1 << " " << s.sales[i] << endl;
	}

	cout << endl;

	cout << "Average : " << s.average << endl;
	cout << "Maximum : " << s.max << endl;
	cout << "Minimum : " << s.min << endl;
}