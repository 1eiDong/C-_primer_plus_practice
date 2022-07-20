// the client program
// compile with stock00.cpp
#include<iostream>
#include"stock00.h"


int main()
{
	Stock chunming;
	chunming.acquire("Isigma", 20, 12.50);
	chunming.show();
	chunming.buy(15, 18.125);
	chunming.show();
	chunming.sell(400, 20.00);
	chunming.show();
	chunming.buy(30000, 40.125);
	chunming.show();
	chunming.sell(30000, 0.125);
	chunming.show();
	return 0;
}