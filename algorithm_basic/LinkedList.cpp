#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include<string>
using namespace std;

template <typename T>
LinkedList<T>::LinkedList() {
	this->length = 0;
	this->head = new Node<T>();
	this->tail = new Node <T>();
	this->head->previous = nullptr;
	this->head->next = this->tail;
	this->tail->previous = this->head;
	this->tail->next = nullptr;
};

template <typename T>
LinkedList<T>:: ~LinkedList() {
	cout << "destory linkedlist object" << endl;
}
template <typename T>
void LinkedList<T> :: add(T e) {
	this->tail->data = e;//尾部结点存储要插入的值
	this->tail->next = new Node<T>();//指针指向的下一个节点赋值
	Node<T> *temp = this->tail;//定义指针变量保存尾部节点指针
	this->tail = this->tail->next;//用新的尾节点替换之前的尾节点
	this->tail->previous = temp;//当前的尾节点的前一个节点就是第一步保存的临时指针
	this->tail->next = nullptr;//新的尾部指针的指向下一个元素为空指针
	length++;//链表长度加一


}


template <typename T>
T LinkedList<T> :: find(int index) {//查找某个元素

	if (index < 0 || index >= this->length)
	{
		return NULL;
	}
	Node<T> *p = this->head->next;
	int x = 0;
	while (p && x++ != index)
	{
		p = p->next;
	}

	return p->data;
}

template <typename T>
int  LinkedList<T> ::size() {
	return this->length;
}

template <typename T>
void  LinkedList<T> ::print(bool isHead) {
	if (length == 0)
	{
		return;
	}

	int x = 0;
	Node<T> *t;
	if (isHead)
	{
		t = this->head->next;
		while (t&&x++ <length){
			cout << t->data << " ";
			t = t->next;
		}
		cout << endl;
	}
	else
	{	t = this->tail->previous;
		while (t && x++ < length)
		{
			cout << t->data << " ";
			t = t->previous;

		}
		cout << endl;
	}
	
};

template <typename T>
bool LinkedList<T>::remove(int index) {
	if (index < 0 || index >= this->length)
	{
		return false;
	}

	int x = 0;
	Node<T> *p = this->head->next;
	while (p)
	{
		if (index == x++)
		{
			Node<T> *temp = p->previous;
			p->previous->next = p->next;
			p->next->previous = temp;
			length -- ;
			delete p;
			p = NULL;
			return true;
		}
		p = p->next;
	}
	return false;
};

template <typename T>
void LinkedList<T>::removeAll() {
	Node<T> *p = this->head->next;
	while (p->next != nullptr)
	{
		delete this->head;
		head = nullptr;
		length --;
		this->head = p;
		p = this->head->next;
	}
}

template <typename T>
void LinkedList<T>::reverse() {
	Node<T> *temp = nullptr;
	Node<T> *current = this->head;
	while (current)
	{
		temp = current->previous;
		current->previous = current->next;
		current->next = temp;
		current = current->previous;//位置已经交换了'
		
	}
	//this->tail = this->head;
	//this->head = temp->previous;
	swap(this->head, this->tail);

}