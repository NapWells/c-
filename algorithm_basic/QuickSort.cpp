#include <iostream>
using namespace std;

template <class T, int N>
int partition(T(&a)[N], int left, int right) 
{
	int base = rand() % (right - left  + 1 );
	if (base < 0 || base >=5)
	{
		cout << base << endl;
	}

	T basic = a[base];
	while (left < right)
	{
		while (left < right && a[right] > basic)
		{
			right--;
		}

		if (left < right)
		{
			a[base] = a[right];
			base = right;
		}

		while (left < right && a[left] < basic)
		{
			left++;
		}

		if (left < right) 
		{  
			a[base] = a[left];
			base = left; 
		}
	}
	a[base] = basic;
	return base;
}


template <class T, int N>
void quick_sort(T(&a)[N],int left = 0,int right = N-1) 
{
	if (left < right)
	{
		//选取随机下标作为基准
		int base = partition(a, left, right);
		quick_sort(a, 0, base - 1);
		quick_sort(a, base, right);
	}
};