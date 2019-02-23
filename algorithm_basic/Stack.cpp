#include "Stack.h"
#include <iostream>
using namespace std;

template <typename T>
Stack<T>::Stack(int size)
{
	this->size = size;
	this->index = 0;
	this->arr = new T[size];
}

template <typename T>
Stack<T>::~Stack()
{
	delete this->arr;
	this->arr = nullptr;
}

template <typename T>
int Stack<T>::getSize() {
	return this->size;
}

template <typename T>
bool Stack<T>::isEmpty() {
	return this->index == 0;
}

template <typename T>
void Stack<T>::push(T value) {
	if (index >= size)
	{
		cout << "stack is full,push fail" << endl;
		return;
	}
	this->arr[this->index++] = value;
}

template <typename T>
T Stack<T>::peek() {
	return this->arr[index-1];
}

template <typename T>
T Stack<T>::pop() {
	if (index <= 0)
	{
		cout << "stack is empty, pop fail" << endl;
		return NULL;
	}
	return this->arr[--index];
}


template <typename T>
void Stack<T>::print() {
	T *a = this->arr;
	for (int i = 0; i < size; i++)
	{
		cout << *a << endl;
		a++;
	}
}

