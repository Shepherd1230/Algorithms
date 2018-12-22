//二分查找

#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;

void bisort(int a[],int x ,int left, int right)
{
	int mid = (left + right) / 2;
	if (a[mid]==x)
	{
		cout << mid + 1 << endl;
	}
	else if (x<a[mid])
	{
		bisort(a, x, left, mid - 1);
	}
	else
	{
		bisort(a, x, mid + 1, right);
	}
}

void arprint(int a[], int n)
{
	int i = 0;
	for (; i < n-1; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[i] << endl;
}

int main()
{
	int a[] = { 3,5,11,17,21,23,28,30,32,50,64,78,81,95,101 };
	int n = 15;

	arprint(a, n);

	
	bisort(a,81, 0, n - 1);
	return 0;
}
