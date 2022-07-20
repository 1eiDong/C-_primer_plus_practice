#include<iostream>
#include"golf.h"
int main()
{
	using std::cout;
	using std::cin;
	golf ann;
	golf sample = { "Tyler Woody", 32 };
	setgolf(ann, sample.fullname, sample.handicap); // non-interactive version
	showgolf(ann);
	cout << "Enter the number of golf data: ";
	int num = 0;
	int i = 0; // marker for received data
	cin >> num;
	cin.get();
	while (num)
	{
		if (num < 0)
		{
			cout << "Bad input, number must above 0.\n";
			cout << "Enter again: ";
			cin >> num;
		}
		else if (num == 0)
		{
			cout << "No data.\n";
			break;
		}
		else
		{
			golf* total = new golf[num];
			for (i = 0; i < num; i++)
			{
				if (!(setgolf(total[i])))
					break;
			}
			for (int j = 0; j < i; j++)
			{
				showgolf(total[j]);
			}
			delete[] total;
			break;
		}
	}
	cout << "Done.\n";
	return 0;
}