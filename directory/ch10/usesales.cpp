// testing class Sales
// compile with sales.cpp
#include<iostream>
#include"sales.h"

int main()
{
	using namespace std;
	double ar[4] = { 250.0,500.0,750.0,1000.0 };
	cout << "Initialize with 3 numbers:\n";
	Sales YongHui = Sales(ar, 3);
	YongHui.showSales();
	cout << "Now with 4 numbers:\n";
	YongHui = Sales(ar, 4);
	YongHui.showSales();
	cout << "Now launching interactive version:\n";
	Sales HongQi = Sales();
	HongQi.showSales();
	return 0;
}