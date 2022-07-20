// member function of class Golf
#include<iostream>
#include<cstring>
#include"golf.h"

Golf::Golf(const char* name, int hc)
{
	strcpy_s(fullname, name);
	handicap = hc;
}

Golf::Golf()
{
	using namespace std;
	cout << "Enter name: ";
	cin.getline(fullname, Len);
	cout << "Enter handicap: ";
	while (!(cin >> handicap))
	{
		cout << "Bad inputs, enter again: ";
		cin.clear();
		while (cin.get() != '\n')
			continue;
	}
}

void Golf::sethc(int hc)
{
	handicap = hc;
}

void Golf::showgolf() const
{
	using namespace std;
	cout << "Name: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;
}