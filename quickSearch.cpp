//二分查找

#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;


//递归实现二分查找
int binSearch(int a[],int key ,int left, int right)
{
	int mid = (left + right) / 2;
	if (a[mid]==key)
	{
		return mid + 1;
	}
	else if (key<a[mid])
	{
		binSearch(a, key, left, mid - 1);
	}
	else
	{
		binSearch(a, key, mid + 1, right);
	}
}

//循环实现二分查找
int binSearch(int a[], int x, int n)
{
	int subscript = -1;//返回的下标
	int i = 0, j = n - 1;
	int mid;
	//int cnt = 0;
	while (i <= j)
	{
		mid = (i + j) / 2;
		//cnt++;
		//cout << "cnt="<<cnt<<"  "<<"mid=" << mid << endl;
		//mid = (j - i) / 2 + i;
		if (a[mid] == x)
		{
			subscript=mid + 1;
			return subscript;
		}
		else if (a[mid] < x)
		{
			i = mid + 1;
		}
		else if (a[mid] > x)
		{
			j = mid - 1;
		}
	}
}


//数组输出
void arrprint(int a[], int n)
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
	int subscript = -1;

	arrprint(a, n);	
	//subscript=binSearch(a,81, 0, n - 1);
	
	subscript = binSearch(a, 81, n);

	cout << subscript << endl;
	arrprint(a, n);

	return 0;
}
