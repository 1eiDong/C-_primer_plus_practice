// testing class Account
// compile with account.cpp
#include<iostream>
#include<string>
#include"account.h"

int main()
{
	using namespace std;
	Account ac1 = Account(); // default initialization
	Account ac2 = Account("Charles Ray", "19845875dd", 30000); 
	Account ac3{ "Henry Wang", "1997852dd", 3000 };
	cout << "The default initialization:\n";
	ac1.show();
	cout << "Another 2 ways of initialization:\n";
	ac2.show();
	ac3.show();
	ac3.save(-1);
	ac3.show();
	ac3.save(200);
	ac3.show();
	ac3.withdraw(-1);
	ac3.show();
	ac3.withdraw(3000);
	ac3.show();
	ac3.withdraw(30000);
	ac3.show();
	return 0;
}