// Account member function
#include<iostream>
#include"account.h"

Account::Account()
{
	fullname = "no name";
	username = "null";
	deposit = 0.0;
}

Account::Account(const string fname, const string uname, double num)
{
	fullname = fname;
	username = uname;
	if (num < 0)
	{
		std::cout << "Amount deposited can't be negative.\n"
			<< "Deposit of account: " << username << " set to 0.\n";
		deposit = 0;
	}
	else
		deposit = num;
}

Account::~Account()
{

}

void Account::show() const
{
	using namespace std;
	cout << "\nFull name: " << fullname << "	Account: " << username << endl;
	cout << "Deposit: $" << deposit << endl;
}

void Account::save(double num)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Amount deposited can't be negative.\n";
		num = 0;
	}
	else
	{
		deposit += num;
	}
}

void Account::withdraw( double num)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Amount withdrawn can't be negative.\n";
		num = 0;
	}
	else if (num > deposit)
	{
		cout << "Amount withdrawn can't be more than deposit.\n";
		num = 0;
	}
	else
		deposit -= num;
}