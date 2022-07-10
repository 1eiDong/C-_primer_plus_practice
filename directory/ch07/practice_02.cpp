#include<iostream>

using namespace std;

const int Max = 10;

int main()
{
	int grade_input(double* ar);
	void grade_show(double* ar, int size, double aver);
	double grade_aver(double* ar, int size);

	double grade_ar[Max];
	double* pa = grade_ar;
	int length = grade_input(pa);
	double average = grade_aver(pa, length);
	grade_show(pa, length, average);

	return 0;
}


int grade_input(double* ar)
{
	double grade;
	int count = 0;
	cout << "Enter golf grade, you may enter up to "
		<< Max << " times.\n";
	cout << "Press q to quit.\n";
	cout << "Enter grade #1: ";
	while (cin >> grade && count < 10)
	{
		ar[count] = grade;
		++count;
		cout << "Enter grade #" << count + 1 << ": ";
	}
	return count; // the true size of array
}

void grade_show(double* ar, int size, double aver)
{
	cout << "Golf grade #1 ~ #" << size << endl;
	for (int i = 0; i < size; ++i)
		cout << ar[i] << '\t';
	cout << "\nAverage grade: " << aver << endl;
}

double grade_aver(double* ar, int size)
{
	double total = 0;
	for (int i = 0; i < size; ++i)
		total += ar[i];
	return total / size;
}