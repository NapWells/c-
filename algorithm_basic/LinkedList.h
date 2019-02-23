#pragma once
#ifndef LINKED_LIST_
#define LINKED_LIST_
#include "Node.h"

template <class T>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void add(T e);//添加元素
	T find(int index);//查找元素
	int size();//链表长度
	void print(bool isHead);//打印链表,参数表示是否从头节点开始打印
	bool remove(int index);//删除指定位置的元素,返回是否删除成功
	void removeAll();//清空链表
	void reverse();//反转链表

private:
	Node<T> *head;
	Node<T> *tail;
	int length;
};

#endif // !LINKED_LIST_

