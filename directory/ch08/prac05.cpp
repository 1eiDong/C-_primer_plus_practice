#include<iostream>

template <class T>
T max5(T ar[5])
{
	T tmp = ar[0];
	for (int i = 0; i < 5; i++)
	{
		if (ar[i] > tmp)
			tmp = ar[i];
	}

	return tmp;
}

int main()
{
	int ar1[5] = { 3,5,8,7,6 };
	double ar2[5] = { 12,35.8,-12.6,23,12 };
	std::cout << max5<>(ar1) << std::endl;
	std::cout << max5<>(ar2) << std::endl;

	return 0;
}