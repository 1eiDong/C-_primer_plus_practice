// using class Stack to edify structure customer
// compile with stack.cpp
#include<iostream>
#include<cctype>
#include"stack.h"

int main()
{
	using namespace std;
	Stack st;
	char ch;
	customer henry = {"Henry Ray", 0.0};
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process structure henry, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		static double total = 0.0;
		while (cin.get() != '\n')
			continue;
		if (!(isalpha(ch)))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case'A':
		case'a': 
			cout << "Enter customer's name: ";
			cin.getline(henry.fullname, 35);
			cout << "Enter a payment to add: ";
			cin >> henry.payment;
			cin.get();
			if (st.isfull())
				cout << "Stack already full\n";
			else
				st.push(henry);
			break;
		case'P':
		case'p': if (st.isempty())
			cout << "Stack already empty\n";
			   else
		{
			total += henry.payment;
			st.pop(henry);
			cout << "Name: " << henry.fullname 
			 << ", with payment $" << henry.payment << " popped\n";
			cout << "The total payment is $" << total << endl;
		}
			   break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process structure henry, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}