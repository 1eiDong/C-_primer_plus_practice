// Bank Account class declaration
#pragma once
#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include<string>
using std::string;
class Account
{
private:
	string fullname;
	string username;
	double deposit;
public:
	Account();
	Account(const string fname, const string uname, double num);
	~Account();
	void show() const;
	void save(double num);
	void withdraw(double num);
};
#endif // !ACCOUNT_H_

