#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//栈区    局部变量，形参
//堆区    动态内存分配 malloc  calloc  realloc  free
//静态区   全局变量 静态变量

//自学——————————————————————————函数栈帧的创建和销毁

//eg：编写函数，不允许创建临时变量，求字符串长度
#include<string.h>
//方法一：循环创建临时变量实现
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')//求一个可以用if，求循环可以用while
//	{
//		count++;
//		s++;
//	}
//	return count;
//}


//方法二：使用if判断语句，函数递归来实现
int my_strlen(char* s)
{
	int count = 0;
	if (*s != '\0')//求一个可以用if，求循环可以用while
	{
		return 1 + my_strlen(s + 1);//++s都可以
	}
	else
	{
	return 0;
 }
}


//两种方法的主函数一样
int main()
{
	//求字符串长度
	char arr[10] = "abcdef";
	//数组名arr是数组首元素的地址

	int len = strlen(arr);//6
	printf("%d\n", len);

	return 0;
}


//字节指针+1  -向后跳1个字节
//char *p;
//p+1 ->向后跳一个字节

//整形指针+1，向后跳4个字节
//int *p;
//p+1->向后跳四个字节
