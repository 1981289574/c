#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	test();
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//		//scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//
//void test2()
//{
//	printf("test2\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//
//
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//n!= =!*2*3*..*n
//
//	int i = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	//1+2+6 = 9
//	//15
//	//ÔËÐÐÊ±´íÎó
//	printf("%d\n", sum);
//	return 0;
//}



//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	//n!= =!*2*3*..*n
//
//	int i = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	//1+2+6 = 9
//	//15
//	//ÔËÐÐÊ±´íÎó
//	printf("%d\n", sum);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);
//
//	//0~9
//
//	/*for (i = 0; i <=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}*/
//
//	return 0;
//}


//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//int ADd(int x, int y)
//{
//	return x + y;
//}

int Add(int x, int y)
{
	return x + y+1;
}

int main()
{
	int ret = Add(2, 3);
	
	printf("%d\n", ret);

	return 0;
}
