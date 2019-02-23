#include "Sort.cpp"
#include "QuickSort.cpp"
#include "Stack.cpp"
#include <iostream>

#include "LinkedList.cpp"

using namespace std;

int main() {
	//int a[] = {4,1, 7, 2, 6};
	//bubble_sort(a);
	//selection_sort(a);
	//insert_sort(a);
	//quick_sort(a);
	//print_array(a);

	/*LinkedList<int> *p = new LinkedList<int>();
	p->add(2);
	p->add(4);
	p->add(3);
	p->add(5);
	p->add(1);
	p->print(true);
	p->print(false);
	int m = p->find(3);
	cout << m << endl;
	p->remove(1);
	cout << p->size() << endl;
	p->print(true);
	p->print(false);
	p->removeAll();
	p->print(true);
	cout << p->size() << endl;
	p->add(3);
	p->add(4);
	p->add(9);
	p->print(true);
	p->print(false);
	cout << p->size() << endl;

	p->reverse();
	p->print(true);
	p->print(false);
	delete p;
	p = NULL;*/

	Stack<int> *stack = new Stack<int>(5);
	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->push(4);
	stack->push(5);
	stack->push(6);
	cout << stack->peek() << endl;
	cout << stack->peek() << endl;
	cout << stack->peek() << endl;
	cout << stack->peek() << endl;
	cout << stack->peek() << endl;
	cout << "------" << endl;
	stack->print();
	cout << "------" << endl;
	cout << stack->pop() << endl;
	cout << stack->pop() << endl;
	cout << stack->pop() << endl;
	cout << stack->pop() << endl;
	cout << stack->pop() << endl;
	cout << stack->pop() << endl;
	cout << "------" << endl;
	stack->print();
	delete stack;
	stack = NULL;

	system("pause");
	return 0;
}



template <class T> void  print_array(T &array) {
	for (unsigned i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		cout << array[i] << "\t" << endl;
	}
}