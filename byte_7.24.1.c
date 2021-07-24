#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
 //交换两个数的值
void swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
int main()
{
	int a, b;
	scanf("%d %d",&a,&b);//scanf输入的内容只能是数据类型，不能有汉字说明

	printf("交换前a的值:%d，交换前b的值:%d\n", a, b);
	swap(a,b);
	printf("交换后a的值：a=%d,交换后b的值：b=%d\n",a, b);
	return 0;
}
