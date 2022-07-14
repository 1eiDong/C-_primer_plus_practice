#include<iostream>
#include<string>


int main()
{
	using namespace std;
	void ShowString(const char* str);
	void ShowString(const char* str, int n);
	const char* pa = "Hello C++!";
	int n;
	int count = 0;
	cout << "Enter a number: ";
	while (cin >> n)
	{
		if (n != 0)
		{
			ShowString(pa, count);
		}
		else
		{
			ShowString(pa);
			count++;
		}
		cout << "Enter number again: ";
	}
	cout << "Done.\n";
	
	return 0;
}

void ShowString(const char* str)
{
	using namespace std;
	cout << str << endl;
}

void ShowString(const char* str, int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << str << endl;
	cout << "\nThis function has been called for "
		<< n << " times.\n";
}