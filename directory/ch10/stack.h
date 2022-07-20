// class definition for the stack ADT
#pragma once
#ifndef STACK_H_
#define STACK_H_

// used for prac05
struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item; //��һ������������ԣ�����ͬ���������ڴ˴������޸ļ���

class Stack
{
private:
	enum {MAX=10};
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	// push() returns false when stack is already full, true otherwise
	bool push(const Item& item);
	// pop() returns false when stack is already empty, true otherwise
	bool pop(Item& item);
};
#endif // !STACK_H_
