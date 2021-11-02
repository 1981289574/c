#define _CRT_SECURE_NO_WARNINGS 1
//2021.7.23
#include<stdio.h>
#include"add.h"
#include"add.h"


////导入静态库
//#pragma comment(lib;"add.lib");//卖的时候给他这个文件就行了




//两数相加
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
	//int a = 10;
	//int b = 20;
	//int ret = Add(a, b);
	//printf("%d\n", ret);
//
//	 return 0;
//}


//当调用函数在主函数后方时，要写函数声明
//int Add(int x, int y);//注意函数声明，函数声明要加";"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret=Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//int Add(int x, int y)//函数定义
//{
//	int z = x + y;
//	return z;
//}

//分快写的好处：
//1.可以实现多人协作
//eg:计算器 test.c
//加法  add.h add.c
//减法  sbu.h sbu.c
//乘法  mul.h mul.c
//除法  div.h div.c
//egc...
//分装和隐藏


//test.c文件经过编译会生成一个test.obj
//add.c文件经过编译会生成一个add.obj文件，
//上述两个obj文件经过链接会生成一个test.exe文件
//int Add(int x, int y);//注意函数声明，函数声明要加";"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}//可以卖出


