#include<iostream>

using namespace std;

int main()
{
	const int Max = 5;
	int fill_array(double ar[], int limit);
	void show_array(const double ar[], int n);
	void revalue(double r, double ar[], int n);

	double properties[Max];

	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size > 0)
	{
		cout << "Enter revalueation factor:";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

int fill_array(double ar[], int limit)
{
	double tmp;
	int i;
	for (i = 0; i < limit; ++i)
	{
		cout << "Enter value #" << i + 1 << ":";
		cin >> tmp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (tmp < 0)
			break;
		ar[i] = tmp;
	}
	return i;
}

void show_array(const double ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "Property #" << i + 1 << ": $";
		cout << ar[i] << endl;
	}
}

void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; ++i)
		ar[i] *= r;
}