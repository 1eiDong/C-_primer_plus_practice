#include<iostream>
#include<string>

using namespace std;

const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };
struct Expense
{
	double expense[Seasons];
};

int main()
{
	//double expenses[Seasons];
	Expense cost = { {} };
	Expense* pa = &cost;
	//void fill(double* ar);
	//void show(double ar[Seasons]);
	void fill_str(Expense* money);
	void show_str(Expense* money);


	//fill(expenses);
	//show(expenses);

	fill_str(pa);
	show_str(pa);

	return 0;
}

void fill(double* ar)
{
	for (int i = 0; i < Seasons; ++i)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> ar[i];
	}
}

void fill_str(Expense* money)
{
	for (int i = 0; i < Seasons; ++i)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (money->expense)[i];
	}
}

void show(double ar[Seasons])
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; ++i)
	{
		cout << Snames[i] << ": $" << ar[i] << endl;
		total += ar[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

void show_str(Expense* money)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; ++i)
	{
		cout << Snames[i] << ": $" << (money->expense)[i] << endl;
		total += (money->expense)[i];
	}
	cout << "Total Expenses: $" << total << endl;
}