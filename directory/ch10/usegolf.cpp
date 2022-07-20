// testing class Golf
// compile with golf.cpp
#include<iostream>
#include"golf.h"

int main()
{
	using namespace std;
	Golf g1 = Golf("Tyler Woods", 100); // non-interactive
	Golf g2 = Golf(); // interactive
	cout << "Non-interactive version:\n";
	g1.showgolf();
	cout << "Interactive version:\n";
	g2.showgolf();
	int n;
	cout << "Enter a integer to reset g2's handicap: ";
	cin >> n;
	cin.get();
	g2.sethc(n);
	g2.showgolf();
}