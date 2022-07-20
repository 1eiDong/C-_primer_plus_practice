// member function of class Move
#include<iostream>
#include"move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	std::cout << "x = " << x
		<< ", y = " << y << std::endl;
}

Move Move::add(const Move& m) const
{
	Move sum;
	sum.x = m.x + this->x;
	sum.y = m.y + this->y;
	return sum;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}