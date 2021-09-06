#include <iostream>
#include <cstring>
#include "sales.h"

using std::cin;
using std::cout;
using std::endl;

namespace SALES
{
	Sales::Sales(const double ar[], int n)
	{
		double sum = 0;

		n = (n <= QUARTERS) ? n : QUARTERS;

		for (int i = 0; i < n; i++)
		{
			sales[i] = ar[i];
			sum += sales[i];
		}

		average = sum / n;

		for (int i = 0; i < n; i++)
		{
			max = min = sales[0];

			if (sales[i] > max)
				max = sales[i];
			if (sales[i] < min)
				min = sales[i];
		}
	}

	Sales::Sales()
	{
		int sales_num;
		double sum = 0;

		cout << "How many sales going to entered? (Maximum 4) ";
		cin >> sales_num;

		sales_num = (sales_num <= QUARTERS) ? sales_num : QUARTERS;

		for (int i = 0; i < sales_num; i++)
		{
			cout << "Enter sales: ";
			cin >> sales[i];

			sum += sales[i];
		}

		average = sum / sales_num;

		for (int i = 0; i < sales_num; i++)
		{
			max = min = sales[0];

			if (sales[i] > max)
				max = sales[i];
			if (sales[i] < min)
				min = sales[i];
		}
	}

	void Sales::showSales()
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			if (sales[i] > 0)
				cout << "sales #" << i + 1 << " " << sales[i] << endl;
		}

		cout << endl;

		cout << "Average : " << average << endl;
		cout << "Maximum : " << max << endl;
		cout << "Minimum : " << min << endl;
	}
}
