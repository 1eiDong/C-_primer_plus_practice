// testing class move
// compile with move.cpp
#include<iostream>
#include"move.h"

int main()
{
	using namespace std;
	Move chunming;
	Move dong = { 22,1 };
	cout << "Default initialization: \n";
	chunming.showmove();
	cout << "Specialized initialization:\n";
	dong.showmove();
	cout << "Reset the value of chunming:\n";
	chunming.reset(51, 5);
	chunming.showmove();
	cout << "Now add dong and chunming together: \n";
	dong.add(chunming).showmove();
	cout << "Done.\n";
	return 0;
}