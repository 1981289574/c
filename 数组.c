#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{//数组初始化
//	int arr[20];//array数组英文
//	int  q[20] = { 1,2,3 };//有20个元素，不完全初始化，剩余的默认初始化为0
//	int w[] = { 1,2,3 };//只有三个元素
//	char e[] = "abc";//占三个字节
//	char r[] = { 'a','b','c' };//占三个字节
//	char t[3] = { 'a',98,'c' };//占三个字节
//
//	
//	printf("%d\n", arr[20]);
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组时使用下标来访问
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//打印数组中的内容
//
//	}//数组在内存中的地址是连续存放的，随着下表的增长，地址由低到高变换
//	return 0;
//}


//int main()
//{
//	//int arr[];
//	int arr[3][4];
//	int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10,11 };//一行一行放满，
//	int arr2[3][5] = { {1,2},{2,3},{3,4} };
//	int arr2[][5] = { {1,2},{2,3},{3,4} };//在初始化后，可以省略行，但不可以省略列
//	char ch[4][6] = { 'a','b','c' };
//	char ch2[4][6] = { {'a'},{'b'} ,{'c'},{'d'}};
//	char ch3[4][6] = { "abc","def","ghi","jkl" };//字符串末尾有一个\0
//	//语法规定
//	//二维数组规定从0开始
//
//
//	return 0;
//}

int main()
{
	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,0} };
	int i = 0;
	for (i = 0; i < 3; i++)//0~2
	{
		int j = 0;
		for (j = 0; j < 5; j++)//0~4
		{
			printf("&arr[%d][%d]=%p\n", &arr[i][j]);
		}
		printf("\n");
	}




	//for (i = 0; i < 3; i++)//0~2
	//{
	//	int j = 0;
	//	for(j=0;j<5;j++)//0~4
	//	{
	//		printf("%d", arr[i][j]);
	//	}
	//	printf("\n");
	//}
	return 0;
}
