// member function of class Sales
#include<iostream>
#include"sales.h"

Sales::Sales(const double ar[], int n)
{
	int count = n < QUARTERS ? n : QUARTERS;
	for (int i = 0; i < count; i++)
		sales[i] = ar[i];
	for (int j = count; j < QUARTERS; j++)
		sales[j] = 0;
	calsales(count);
}

Sales::Sales()
{
	using namespace std;
	int count = 0;
	cout << "You may enter up to " << QUARTERS << " numbers.\n";
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << "number #" << i + 1 << ": ";
		while (!(cin >> sales[i]))
		{
			cout << "Bad input! enter again: ";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
		count++;
	}
	calsales(count);
}

void Sales::showSales() const
{
	using namespace std;
	cout << "Sales of 4 quarters: ";
	for (int i = 0; i < QUARTERS; i++)
		cout << sales[i] << " ";
	cout << endl;
	cout << "Average: " << average
		<< ", Maxium: " << max
		<< ", Minium: " << min << endl;
}

void Sales::calsales(int n)
{
	double total = 0;
	double maxium = sales[0];
	double minium = sales[0];
	for (int i = 0; i < n; i++)
	{
		total += sales[i];
		if (maxium < sales[i])
			maxium = sales[i];
		if (minium > sales[i])
			minium = sales[i];
	}
	average = total / n;
	max = maxium;
	min = minium;
}