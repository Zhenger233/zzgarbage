// z5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//计算阶乘阶乘和

#include "pch.h"
#include <iostream>
long long  jiecheng(long long  a)
{
	long long  z,y=1;
	for (z = 1;z <= a; z++)
	{
		y *= z;
	}
	return y;
}
int main()
{
    std::cout << "Hello World!\n"; 
	long long  a,s=0,n;
	printf("n=");
	scanf_s("%lld", &n);
	for (a = 1; a <= n; a++)
	{
		s += jiecheng(a);
	}
	printf("n!=%lld\n", jiecheng(n));
	if (n == 0)
	{
		printf("s=1");
	}
	else
	{
		printf("s=%lld", s);
	}
}
	
