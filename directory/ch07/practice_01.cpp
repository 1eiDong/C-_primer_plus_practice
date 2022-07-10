#include<iostream>

using namespace std;

double harmonic_aver(double x, double y)
{
	double h_aver = 2 * x * y / (x + y);
	return h_aver;
}

void main()
{
	double harmonic_aver(double x, double y);
	double x1;
	double x2;
	cout << "Enter 2 numbers:(0 to quit)\n";
	cin >> x1 >> x2;
	while (x1 != 0 && x2 != 0)
	{
		double average = harmonic_aver(x1, x2);
		cout << "The harmonic average of " << x1
			<< " and " << x2 << " is " << average << endl;
		cout << "Enter 2 numbers:(0 to quit)\n";
		cin >> x1 >> x2;
	}
	cout << "Done.\n";
}