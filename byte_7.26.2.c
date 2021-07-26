#define _CRT_SECURE_NO
#include<stdio.h>
int x = 0;
int y = 0;
void test()
{
	int a = 10;
	int b = 20;
	x = a;
	y = b;
	
}//用全局变量传回两个值

int main()
{
	test();

	printf("%d %d\n", x, y);//10 20
	return 0;
}


//#define _CRT_SECURE_NO
//#include<stdio.h>
//void test(int arr[])
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//
//}//用数组传回两个值
//
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//#define _CRT_SECURE_NO
//#include<stdio.h>
//void test(int *px,int *py)
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}//用指针传回两个值
//
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	test(&x,&y);
//
//	printf("%d %d\n",x,y);
//	return 0;
//}
