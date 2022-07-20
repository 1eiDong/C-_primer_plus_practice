#include<iostream>
#include"sales.h"

using namespace SALES;
int main()
{
	using std::cout;
	Sales DaRunFa;
	Sales YongHui;
	cout << "Non-interactive version:\n ";
	cout << "When number is lesser than 4:\n";
	const double sells[4] = { 1983.1,1984.1,1985.1,1996.1 };
	setSales(DaRunFa, sells, 3);
	showSales(DaRunFa);
	cout << "Now set number as 4:\n";
	setSales(DaRunFa, sells, 4);
	showSales(DaRunFa);
	cout << "Interactive version:\n";
	setSales(YongHui);
	showSales(YongHui);
	return 0;
}