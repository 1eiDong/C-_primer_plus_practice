// testing List class
// compile with list.cpp
#include<iostream>
#include"list.h"

void bigger(Item& x);
void half(Item& x);
void Minus(Item& x);
int main()
{
	using namespace std;
	List ls1 = List();
	while (!(ls1.isfull()))
	{
		Item tmp;
		cout << "Enter number into list: ";
		while (!(cin >> tmp))
		{
			cout << "Bad input, enter again: ";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
		ls1.add(tmp);
	}
	cout << "\nNow the list includes: ";
	ls1.showlist();
	cout << "\nMake all the elements bigger:\n ";
	void (*pf)(Item&);
	pf = bigger;
	ls1.visit(pf);
	ls1.showlist();
	cout << "\nMake all the elements smaller:\n ";
	pf = half;
	ls1.visit(pf);
	ls1.showlist();
	cout << "\nMake all the elements subtract 5:\n ";
	pf = Minus;
	ls1.visit(pf);
	ls1.showlist();
	return 0;
}

void bigger(Item& x)
{
	x *= 3.0;
}

void half(Item& x)
{
	x /= 2.0;
}

void Minus(Item& x)
{
	x -= 5.0;
}