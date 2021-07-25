#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//递归和非递归分别实现求第n个斐波那契数

//第一种方法：递归方法
int Fib(n);
int main()
{
	printf("请输入数字：");
	int n;
	scanf("%d", &n);
	int sum = Fib(n);
	printf("%d\n", sum);
	system("pause");
	return 0;
}
int Fib(n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}

for循环
/*
*********递归方法***********
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Fib(n);
int main()
{
	printf("请输入数字：");
	int n;
	scanf("%d", &n);
	int sum = Fib(n);
	printf("%d\n", sum);
	system("pause");
	return 0;
}
int Fib(n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}*/
*********for循环***********
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("input number:");
	int n;
	scanf("%d", &n);
	int sum, num1 = 1, num2 = 1;
	if (n == 1 || n == 2)
	{
		sum = 1;
	}
	else
	{
		for (int i = 3; i <= n; i++)
		{
			sum = num1 + num2;
			num2 = num1;
			num1 = sum;
		}
	}
	printf("%d", sum);
	system("pause");
	return 0;
}

