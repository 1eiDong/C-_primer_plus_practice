#include<iostream>
using namespace std;
#include<cstring>


template <typename T>
T maxn(T ar[], int n);

template <>
char* maxn(char* arr[], int n);

int main()
{
	int ar1[6] = { 1,3,4,5,7,9 };
	double ar2[4] = { 13.0,22.4,13.7,-13.2 };
	char* str[5] =
	{
		"ChengDu",
		"ShangHai",
		"Guangzhou",
		"ShenZhen",
		"Beijing"
	};
	cout << "The maxium in int array: " << maxn(ar1, 6) << endl;
	cout << "The maxium in double array: " << maxn(ar2, 4) << endl;
	cout << "The maxium in char array: " << maxn(str, 5) << endl;

	return 0;
}

template <typename T>
T maxn(T ar[], int n)    // general version
{
	T tmp = ar[0];
	for (int i = 1; i < n; i++)
	{
		if (tmp < ar[i])
			tmp = ar[i];
	}
	return tmp;
}
//specialization for type char*
template<>
char* maxn(char* arr[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (strlen(arr[i]) > strlen(arr[max]))
			max = i;
	}
	return arr[max];
}