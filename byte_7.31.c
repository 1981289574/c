#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	char a = 3;//a是1byte - 8bit
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;//b是1byte - 8bit
//	//00000000000000000000000001111111
//	//01111111 - b
//	
//	//
//	//a和b都是char类型，自身大小的都是1byte，所以这里计算的时候要进行整型提升
//	//
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//	
//	
//	printf("%d\n", c);
//	//
//
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;//11111111111111111111111111010110
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	float r = a + f;
//
//	return 0;
//}

//int main()
//{
//	//int a = 2;
//	//int b = 4;
//	//int c = a + b + 3;
//
//	//int c = 3;
//	//int e = --c;
//	//int d = c + e;
//
//	return 0;
//}
#include<stdio.h>
//
//int main()
//{
//	int a = 1;
//	int d = 0;
//	d = (++a) + (++a) + (++a);
//
//	printf("%d\n", d);
//
//	return 0;
//}
//
//

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//
//	char c = 'w';
//	char * pc = &c;
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int*  pa = &a;
//	char* pc = &a;
//	
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	printf("%p\n", pa+2);
//	printf("%p\n", pc+2);
//
//	//指针类型的意义2：
//	//指针类型决定了，指针+-整数的时候的步长(指针+-整数的时候，跳过几个字节)
//	//int* 指针 +1 跳过4个字节
//	//char* 指针+1 跳过1个字节
//	
//	//int a = 0x11223344;
//	//char* pc = &a;//int*
//	//*pc = 0;
//
//	//int*pa = &a;
//	//*pa = 0;
//	//指针类型的意义1：
//	//指针类型决定了指针解引用操作的时候，一次访问几个字节（访问内存的大小）
//	//char* 指针解引用访问1个字节
//	//int* 指针解引用访问4个字节
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };//40个字节
//
//	char* pa = arr;//int*
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(pa + i) = 1;
//	}
//
//	//int* p = arr;//&arr[0] - int*
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = 1;//0x00 00 00 01
//	//}
//
//
//	return 0;
//}
//
//int main()
//{
//	//int* p;//没有初始化-里边放的是随机值
//
//	//*p = 20;//通过p中存的随机值作为地址，找到一个空间，这个空间不属于我们当前的程序
//	////就造成了非法访问，p就是野指针
//
//	//指针越界造成野指针的问题
//	int arr[10] = 0;
//	int i = 0;
//	int* p = arr;
//
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}


//
//int* test()
//{
//	int a = 10;
//	return &a;//int*
//}
//
//int main()
//{
//	int* p = test();
//
//	//printf("hehe\n");
//
//	printf("%d\n", *p);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* p = &a;//明确地初始化，确定指向
//
//	int* p2 = NULL;//不知道一个指针当前应该指向哪里时，可以初始化为NULL
//	//*p2 = 100;//err
//
//	if (p2 != NULL)
//	{
//		*p2 = 100;
//	}
//
//
//	return 0;
//}

int test()
{
	int a = 100;
	return a;
}
int main()
{
	int b = test();

	return 0;
}
