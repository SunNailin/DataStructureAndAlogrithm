#include "stack.h"  
#include <iostream>  
using namespace std;

template<typename T>
Stack<T>::Stack(int capcity)
{
	if (capcity<0)
	{
		MessageBox(NULL, TEXT("the capcity is illegal"), TEXT(""), MB_OK);
		return;
	}
	this->capcity = capcity;
	top = 0;
	elemArray = new T[capcity];
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] elemArray;
}

template<typename T>
void Stack<T>::ClearStack()
{
	top = 0;
}

template<typename T>
bool Stack<T>::isEmpty()
{
	return (top == 0);
}

template<typename T>
bool Stack<T>::isFull()
{
	return (top == capcity);
}

template<typename T>
int Stack<T>::StackLength()
{
	return top;
}

template<typename T>
T Stack<T>::GetTop()
{
	if (isEmpty())
	{
		MessageBox(NULL, TEXT("the stack is empty"), TEXT(""), MB_OK);
		return 0;
	}
	return elemArray[top - 1];
}

template<typename T>
void Stack<T>::Push(T e)
{
	if (isFull())
	{
		cout << "The stack is full" << endl;
		return;
	}
	elemArray[top] = e;
	top++;
}

template<typename T>
void Stack<T>::Pop()
{
	if (isEmpty())
	{
		MessageBox(NULL, TEXT("the stack is empty"), TEXT(""), MB_OK);
		return;
	}
	top--;
}