#define _CRT_SECURE_NO_WARNINGS 1

//strcpy
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[20] = "xxxxxxxxx";//目标空间
//	char arr2[] = "hello";
//
//	char* ret = strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	printf("%s\n", ret);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello bit";//xxxxx bit
//	int n = 5;
//	char *ret = (char*)memset(arr, 'x', n);
//	printf("%s\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 5*sizeof(int));
//
//	return 0;
//}

//函数 - 自定义函数
//
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	//求2个数的较大值
//	//int max = get_max(a, 20+1);
//	int max = get_max(a, get_max(4, 5));
//
//	//printf("max = %d\n", max);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	//函数
//	Swap(a, b);
//	//实参a和b，传给形参x,y的时候，形参将是实参的一份临时拷贝
//	//改变形参变量x,y，是不会影响实参a和b。
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	*pa = 20;
//
//	printf("%d\n", a);
//	return 0;
//}
//
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* px, int* py)
//{
//	int z = 0;
//
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	Swap1(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//is_prime
//如果是素数 返回1
//不是素数， 返回0

#include <math.h>

//判断n是否为素数
//int is_prime(int n)
//{
//	//试除法
//	//2~n-1
//	//2~sqrt(n)
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int cnt = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			cnt++;
//		}
//	}
//	printf("\ncount = %d\n", cnt);
//
//	return 0;
//}

//1000-2000 闰年

//int is_leap_year(int y)
//{
//	if (y % 4 == 0)
//	{
//		if (y % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	if (y % 400 == 0)
//		return 1;
//
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

//
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是否为闰年
//		//函数
//		//是闰年，返回1
//		//不是闰年，返回0
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}


//写一个函数，实现一个整形有序数组的二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	//找不到
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//找到了，返回下标
//	//找不到，返回-1
//	int ret = binary_search(arr, k, sz);//TDD - 测试驱动开发
//	
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了,下标是：%d\n", ret);
//
//	return 0;
//}

//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	//找不到
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 3;
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//找到了，返回下标
//	//找不到，返回-1
//	int ret = binary_search(arr, k, 0, 9);//TDD - 测试驱动开发
//
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了,下标是：%d\n", ret);
//
//	return 0;
//}
//

//void Add(int* p)
//{
//	*p = *p + 1;
//}
//
//int main()
//{
//	int num = 0;
//
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//
//	return 0;
//}
//
//
//int Add(int n)
//{
//	return n + 1;
//}
//
//int main()
//{
//	int num = 0;
//
//	num = Add(num);
//	printf("%d\n", num);//1
//
//	num = Add(num);
//	printf("%d\n", num);//2
//	
//	num = Add(num);
//	printf("%d\n", num);//3
//
//	return 0;
//}
//

//int main()
//{
//	//嵌套定义是不支持的 - err
//	void test()
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()
{
	//int len = strlen("abc");
	//printf("%d\n", len);


	//printf("%d\n", strlen("abc"));//链式访问

	//char arr1[20] = "xxxxxx";
	//char arr2[20] = "abc";

	//printf("%s\n", strcpy(arr1, arr2));

	printf("%d", printf("%d", printf("%d", 43)));
	//4321

	return 0;
}
