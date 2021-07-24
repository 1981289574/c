
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

输入：1729，输出：19
int DigitSum(int n)
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}
int main()
{
	int n = 0;
	printf("请输入一个数字\n");
	scanf("%d", &n);
	printf("%d\n", DigitSum(n));
	return 0;
}
