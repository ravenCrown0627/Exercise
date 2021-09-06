#pragma once

#ifndef STACK_00_
#define STACK_00_

struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;
	
class Stack
{
	private:
		enum {MAX = 10};
		Item customer[MAX]{};
		int top;
	public:
		Stack() { top = 0; }
		bool isempty() const;
		bool isfull() const;
		bool push(const Item& item);
		bool pop(Item & item);
};

#endif // !STACK_00
