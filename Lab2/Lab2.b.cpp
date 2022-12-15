#include <iostream>
#include <stdio.h>
#include <stack>
#include <list>
using namespace std;

//Sıralı stack fonksiyonu
stack<int> sortStack(stack<int>& instack)
{
	stack<int> tmpStack;
	while (!instack.empty())
	{
		int tmp = instack.top();
		instack.pop();

		while (!tmpStack.empty() && tmpStack.top() < tmp)
		{
			instack.push(tmpStack.top());
			tmpStack.pop();
		}
		
		tmpStack.push(tmp);
	}

	return tmpStack;
}

//Tersten sıralı stack fonksiyonu
stack<int> sortStackReverse(stack<int>& input)
{
	stack<int> tmpStack;

	while (!input.empty())
	{

		int tmp = input.top();
		input.pop();

		while (!tmpStack.empty() && tmpStack.top() > tmp)
		{
			input.push(tmpStack.top());
			tmpStack.pop();
		}

		tmpStack.push(tmp);
	}

	return tmpStack;
}

int main()
{
	//stack oluşturma
	stack<int> input;
	////push işlemi
	input.push(30);
	input.push(6);
	input.push(21);
	input.push(75);
	input.push(14);
	input.push(7);

	////listeleme
	stack<int> tmpStack = sortStack(input);
	cout << "Sorted numbers are:" << endl;
	while (!tmpStack.empty())
	{
		cout << tmpStack.top() << " ";
		tmpStack.pop();
	}
	cout << endl;

	////push işlemi
	input.push(30);
	input.push(6);
	input.push(21);
	input.push(75);
	input.push(14);
	input.push(7);

	////reverse listeleme
	stack<int> tmpStack2 = sortStackReverse(input);
	cout << "Reverse sorted numbers are:" << endl;
	while (!tmpStack2.empty())
	{
		cout << tmpStack2.top() << " ";
		tmpStack2.pop();
	}
}