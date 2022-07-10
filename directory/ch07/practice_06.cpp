#include<iostream>

using namespace std;
const int Max = 5;

int main()
{
	int Fill_array(double* ar, int size);
	void Show_array(double* ar, int size);
	void Reverse_array(double* ar, int size);

	double grade[Max];
	int length = Fill_array(grade, Max);
	Show_array(grade, length);
	Reverse_array(grade, length);
	Show_array(grade, length);
	return 0;
}

int Fill_array(double* ar, int size)
{
	double tmp;
	int i = 0;
	cout << "You may enter up to " << size
		<< " numbers.\n";
	cout << "Enter #1 number(q to quit): ";
	while ((cin >> tmp) && i < size)
	{
		ar[i] = tmp;
		if (i == 4)
			break;
		cout << "Enter #" << i + 2 << ": ";
		++i;
	}
	return i + 1;
}

void Show_array(double* ar, int size)
{
	cout << "\nThe array contains: ";
	for (int i = 0; i < size; i++)
		cout << ar[i] << '\t';
	cout << endl;
}

void Reverse_array(double* ar, int size)
{
	double tmp;
	for (int i = 0; i < size / 2; ++i)
	{
		tmp = ar[i];
		ar[i] = ar[size - 1 - i];
		ar[size - 1 - i] = tmp;
	}
	cout << "\n Array Reversed.\n";
}