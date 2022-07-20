// class List declaration
#pragma once
#ifndef LIST_H_
#define LIST_H_

typedef double Item;
class List
{
	int size;
	Item* list;
	int top;
public:
	List();
	void create();
	bool add(const Item item);
	bool isempty();
	bool isfull();
	void visit(void(*pf) (Item& x));
	void showlist() const;
	~List() { delete[] list; }

};
#endif // !LIST_H_

