// testing class Plorga
// compile with plorga.cpp
#include<iostream>
#include"plorga.h"

int main()
{
	using namespace std;
	Plorga henry = Plorga("Henry Lei");
	Plorga someone;
	cout << "#2 initialization:\n";
	henry.showPL();
	cout << "#1 initialization:\n";
	someone.showPL();
	cout << "When enter more than 20 chars:\n";
	someone = Plorga("Alexsander Vladimir Pultin");
	cout << "Now set henry CI to 100, someone to 42\n";
	henry.setCI(100);
	henry.showPL();
	someone.setCI(42);
	someone.showPL();
}