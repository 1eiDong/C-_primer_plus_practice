#include<iostream>
using namespace std;

struct debts
{
	char name[50];
	double amount;
};

template <class T>
void SumArray(T arr[], int n);

template <class T>
void SumArray(T* arr[], int n);

int main()
{
	int things[6] = { 13,31,103,301,310,130 };
	debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};

	double* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Accumalating Mr.E's counts of things:\n";
	SumArray(things, 6); //uses template A
	cout << "Accumulating Mr.E's counts for debts:\n";
	SumArray(pd, 3);

	return 0;
}


template <class T>
void SumArray(T arr[], int n)
{
	cout << "\nSum\n";
	T total = 0;
	for (int i = 0; i < n; i++)
		total += arr[i];
	cout << total << endl;
}

template <class T>
void SumArray(T* arr[], int n)
{
	cout << "\nSum\n";
	T total = 0;
	for (int i = 0; i < n; i++)
		total += *arr[i];
	cout << total << endl;
}