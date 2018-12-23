// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<stdlib.h>
#include<time.h>
#include <iostream>
#include<math.h>


using namespace std;

struct Point
{
	double x;
	double y;
};

Point gePoint()
{
	Point sample = {0.1,0.1};

	int temp = rand();
	sample.x = double(temp) / RAND_MAX;

	temp = rand();
	sample.y = double(temp) / RAND_MAX;

	return sample;
}

double distance(Point a, Point b)
{
	double d = -1.0;

	d = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
	return d;
}

int main()
{	
	srand((unsigned int)(time(NULL)));

	Point center = { 0.5,0.5 };
	Point temp;

	int cnt = 0;//计数变量
	int times = 1000000;
	for (int i = 0; i < times; i++)
	{
		temp = gePoint();
		if (distance(temp,center)<0.5)
		{
			cnt++;
		}
	}

	cout << "cnt=" << cnt << "  " << "times=" << times << endl;
	cout << "pi=" << (4.0*cnt) / times << endl;
	return 0;
}
