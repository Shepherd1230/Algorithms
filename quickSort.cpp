//快速排序

#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;

void quickSort(vector<int> &a, int left, int right)
{
	if (left > right)
		return;

	int i = left, j = right;
	int temp = a.at(i);

	while (i < j)
	{
		while (i < j && a.at(j) >= temp)
		{
			j--;
		}
		if (j > i)
		{
			a.at(i) = a.at(j);
		}

		while (i < j && a.at(i) <= temp)
		{
			i++;
		}
		if (i < j)
		{
			a.at(j) = a.at(i);
		}
	}


	a.at(i) = temp;

	quickSort(a, left, i - 1);

	quickSort(a, i + 1, right);


}

void vec_print(vector<int> a)
{
	int i = 0;
	for (i = 0; i < a.size() - 1; i++)
	{
		cout << a.at(i) << " ";
	}
	cout << a.at(i) << endl;
}

int main()
{
	//int ini_value[7] = { 1,2,3,4,5,6,7 };
	int ini_value[7] = { 7,6,5,4,3,2,2 };
	vector<int> a(ini_value, ini_value + 7);
	vec_print(a);

	quickSort(a, 0, a.size() - 1);

	vec_print(a);
	return 0;
}
