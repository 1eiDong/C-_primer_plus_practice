// Person class member function
#include<iostream>
#include<string>
#include<cstring>
#include"person.h"


// only #2, #1 has been defined in header file
Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	strcpy_s(fname, fn);
}

Person::~Person()
{

}

void Person::Show() const
{
	using namespace std;
	cout << "\nfirstname lastname format:\n";
	cout << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
	using namespace std;
	cout << "\nlastname firstname format:\n";
	cout << lname << " " << fname << endl;
}