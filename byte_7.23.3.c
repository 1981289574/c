#define _CRT_SECURE_NO_WARNINGS 1

//接受一个整型值（无符号），按照顺序打印每一位数字
// 思路：
//1234%10-->4
//1234/10--> 123
//123%10 --> 3
//123/10 --> 12
//12%10  --> 2
//12/10  --> 1
//1%10   --> 1
#include<stdio.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	//递归
	//满足限制条件时，结束递归
	// 
    
	unsigned int num = 0;
	scanf("%d", &num);
		print(num);

	//函数自己调用自己
	//函数形式：
    /* print(1234):
	   print(123)+4
	   print(12)+3+4
	   print(1)+2+3+4
	   print(1)print(2)print(3)print(4)*/
	return 0;
}
//栈溢出：创建num，main，print空间即函数栈帧，
//        运行时堆栈，不停地调用print会使空间溢出，
//        调用完成函数
//栈区：局部变量
//      形参
//堆区：动态内存分配
//     malloc
//     calloc
//     realloc
//     free
//静态区:全局变量
//       动态变量
