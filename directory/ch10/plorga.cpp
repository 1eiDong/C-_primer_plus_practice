// member function of class Plorga
#include<iostream>
#include<cstring>
#include"plorga.h"

Plorga::Plorga(const char* nm)
{
	if (strlen(nm) > 20)
	{
		std::cout << "The string \"" << nm << "\" is too long\n"
			<< "Now set name as \"Plorga\"\n";
		strcpy_s(name, "Plorga");
	}
	else
		strcpy_s(name, nm);
	CI = 50;
}

void Plorga::setCI(int ci)
{
	CI = ci;
}

void Plorga::showPL() const
{
	using namespace std;
	cout << "Name: " << name
		<< ", CI: " << CI << endl;
}

