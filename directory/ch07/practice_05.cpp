#include<iostream>

using namespace std;

int main()
{
	long long factorial(int n);
	
	int n;
	cout << "Enter the factorial you want: (q to quit) ";
	while (cin >> n)
	{
		long long fcl = factorial(n);
		cout << n << "! = " << fcl << endl;
		cout << "Enter another integer: ";
	}
	cout << "Done.\n";
	return 0;
}

long long factorial(int n)
{
	long long fac = n;
	if (fac == 1)
		return 1;
	else
		return fac * factorial(n - 1);
}