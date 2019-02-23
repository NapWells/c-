#include <iostream>
using namespace std;

//√∞≈›≈≈–Ú
template <class T>
void bubble_sort(T &array) 
{
	int length = sizeof(array) / sizeof(array[0]);
	for (unsigned i = 0; i < length - 1; i++)
	{
		for (unsigned j = i+1; j < length; j++)
		{
			if (array[i] > array[j])
			{
				swap(array[i], array[j]);
			}

		}
	}
};

//—°‘Ò≈≈–Ú
template <class T>
void selection_sort(T &array) {
	int length = sizeof(array) / sizeof(array[0]);
	int minIndex = 0;
	for (int i = 0; i < length -1; i++)
	{
		minIndex = i;
		for (int j = i + 1; j < length; j++) {
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		swap(array[i], array[minIndex]);
	}
};

//≤Â»Î≈≈–Ú
template <class T,int N>
void insert_sort(T (&a)[N]) {
	for (int i = 1; i < N; i++) {
		T temp = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > temp) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = temp;
	}
};




