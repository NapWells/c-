#pragma once
#ifndef STACK_H_
#define STACK_H_

template <class T>
class Stack
{
public:
	Stack(int size);
	~Stack();
	void push(T value);//压栈
	T peek();//取出栈顶元素
	T pop();//取出并删除栈顶元素
	int getSize();
	bool isEmpty();
	void print();

private:
	int size;
	int index;
	T *arr;
};

#endif // !STACK_H_