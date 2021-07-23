#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"//自定义头文件的引用
//导入静态库
// #pragma comment(lib,"add.lib")
//总模块：test.c
//加法：add.h  add.c
//减法：sub.h  sub.c
//乘法：mul.h  mul.c
//除法：div.h  div.c

int main()
{
	int a = 10;
	int b = 20;

	int ret = Add(a, b);
	printf("%d\n", ret);

	return 0;

}
//加法
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//test.c add.c  最终会生成test.exe
//1.编译-->test.obj，add.obj2.链接//9:25
//2.
