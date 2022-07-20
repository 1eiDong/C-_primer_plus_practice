// member function of class List
#include<iostream>
#include"list.h"

List::List()
{
	using namespace std;
	cout << "Enter the size of list: ";
	while (!(cin >> size) || size < 0)
	{
		cin.clear();
		if (size < 0)
		{
			cout << "The size of list can't be negative.\n"
				<< "Enter again: ";
		}
		else
		{
			cout << "The size of list must be integer.\n"
				<< "Enter again: ";
		}
		while (cin.get() != '\n')
			continue;
	}
	list = new Item[size];
	top = 0;
}
void List::create()
{
	list = new Item[0];
}

bool List::add(const Item item)
{
	using namespace std;
	if (isfull())
	{
		cout << "List is full.\n";
		return false;
	}
	else
	{
		list[top++] = item;
		return true;
	}

}
bool List::isempty()
{
	return top == 0;
}
bool List::isfull()
{
	return top == size;
}
void List::visit(void(*pf) (Item&))
{
	for (int i = 0; i < size; i++)
		(*pf)(list[i]);
}
void List::showlist() const
{
	using namespace std;
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
	cout << endl;
}