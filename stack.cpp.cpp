// stack.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Stack
{
public: 
	void PushtoStack(int num);
	void PopStack();
	void DisplayStack();

	int limit=10;
	int items[10];
	int top = -1;


};

void Stack::PushtoStack(int num)
{
	if (top >= limit)
		std::cout << "Stack Limit reached!" << std::endl;
	else items[++top] = num;
}

void Stack::PopStack()
{
	if (top < 0)
		std::cout << "No more items in the stack" << std::endl;
	else
	{
		items[top] = -1;
		int x = items[top--];
	}
}

void Stack::DisplayStack()
{
	int i;
	for (i = 0; i <= top; i++)
	{
		std::cout << "The stack: " << items[i] << std::endl;
	}
}



int main()
{
	struct Stack s;
	int item;
	char ans = 'Y';

	while (ans == 'Y')
	{
		std::cout << "Please enter item into stack: " << std::endl;
		std::cin >> item;
		std::cin.clear();
		s.PushtoStack(item);
		std::cout << "Would you like to enter more items (Y/N)? " << std::endl;
		std::cin >> ans;
		std::cin.clear();
	}
	if (ans == 'N')
	{
		std::cout << "Now we will pop out the top item in the stack..." << std::endl;
		s.PopStack();

		s.DisplayStack();
	}
	return 0;
}