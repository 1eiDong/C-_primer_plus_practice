// testing class Person
// compile with person.cpp
#include<iostream>
#include"person.h"

int main()
{
	using namespace std;
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	one.FormalShow();
	two.Show();
	two.FormalShow();
	three.Show();
	three.FormalShow();
	return 0;
}