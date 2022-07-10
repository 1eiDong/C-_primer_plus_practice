#include<iostream>

using namespace std;
typedef double (*calc_func)(double x, double y);

int main()
{
	double calculate(double x, double y, calc_func f);
	double add(double x, double y);
	double multi(double x, double y);
	double harmonic_aver(double x, double y);


	calc_func pa[3] = { add, multi, harmonic_aver };
	double x, y;
	cout << "Enter 2 numbers(q to quit): ";
	while ((cin >> x >> y))
	{
		for (int i = 0; i < 3; ++i)
		{
			calculate(x, y, pa[i]);
		}
		cout << "\nEnter 2 numbers: ";
	}

	cout << "\nDone.\n";
	return 0;
}

double add(double x, double y)
{
	cout << "Add: " << x + y << endl;
	return x + y;
}

double multi(double x, double y)
{
	cout << "Multiplication: " << x * y << endl;
	return x * y;
}

double harmonic_aver(double x, double y)
{
	// calculate harmonic average
	double answer = 2 * x * y / (x + y);
	cout << "Harmonic average: " << answer << endl;
	return answer;
}

double calculate(double x, double y, calc_func f)
{
	return f(x, y);
}