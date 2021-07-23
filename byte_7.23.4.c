#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
////计算n的阶乘
////方法一：
////int Fac(int n)//Fac求n的阶乘
////{
////	int i = 0;
////	int ret = 1;
////	for (i = 1; i <= n; i++)
////	{
////		ret *= i;
////	}
////		return ret;
////}
//
////方法二：
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//
//	return 0;
//}



//斐波那契数列
//1 1 2 3 4 8 13 21 34 55....
//前两个数字之后等于第三个数字

int Fib(int n)
{
	
	if (n == 3)
	{
		count++;
	}
		
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int count;
int main()
{
	
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	printf("%d\n", count);
	return 0;
}
//迭代(循环)
