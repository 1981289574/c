#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i=0;
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d", i);
//		//i = 5;不可以在for循环内部修改循环变量，容易造成死循环
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	/*for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);//和上面那种写法的作用一致
//	}*/
//	return 0;//输出0 0 0 0 0 0 0 0 0 0
//}


//int main()
//{
//	int i = 0;
//	//1.for循环的初始化，条件，判断三个部分都可以省略
//	//2.判断部分省略，意味着判断条件值为真
//	//3.建议。不要轻易省略
//	for (;;)//初始化，条件，判断都没写
//	{
//		printf("hehe");
//
//	}
//	return 0;//造成代码死循环
//}

//int main()
//{
//	int i=0;
//	int j=0;
//	for (i = 0; i < 10; i++)//外层循环
//	{
//		for (j = 0; j < 10; j++)//内层循环
//		{
//			printf("hehe\n");
//		}
//	}//会打印100个hehe
//	return 0;
//}

//变种1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)//省略i=0
//	{
//		for (; j < 10; j++)//省略j=0
//		{
//			printf("hehe\n");
//		}
//	}//会打印10个hehe
//	return 0;
//}

//变种2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, ++y)
//	{
//		printf("hehe");
//	}//可打印四个hehe
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//判断部分为k = 0，
//	{
//		k++;
//	}//循环次数为0
//	return 0;
//}


//do-while循环
//do-while循环语句语法
// 
//do 
//    循环语句；
//	while（表达式）；


//打印1-10
//int main()
//{
//	int i = 0;
//	do 
//	{
//		printf("%d", i);
//		i++;
//	} while (i<=10);//条件成立就可以往上打印
//    //打印结果012345678910
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		if (5 == i)
//			break;
//		i++;
//	} while (i < 10);
//	return 0;
//	//打印结果0 1 2 3 4 5
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		if (5 == i)
//			continue;
//		i++;
//	} while (i < 10);
//	return 0;
//	//打印结果0 1 2 3 4 5之后5开始死循环，
//	//do-while语句的循环体至少执行一次，先执行再判断
//}


//计算n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret=1;
//	printf("请输入一个值");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;//如果输入的数字太大。可以用float，double型
//}

//计算1！+2！+3！...
//int main()
//{
//	//思路：先求出每个数的阶乘再相加
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("请输入一个值");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;//每次都计算sum
//	}
//	printf("%d\n", sum);
//	return 0;//如果输入的数字太大。可以用float，double型
//}

//3t在一个有序数组中查找具体的某个数字n
//编写int binary(int x,int[],int n);
//功能：在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x

//int mian()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr[10] = { 0 };有10个0
//	//查找7
//	//遍历数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (7 == arr[i])//查找7
//		{
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("找到了，下标是：%d", i)
//	else
//		printf("找不到");
//	return 0;
//}

//另一种思路
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int arr[10] = { 0 };有10个0
	//查找7
	//遍历数组
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int flag = 0;
	for (i = 0; i < sz; i++)
	{
		if (7 == arr[i])//查找7
		{
			break;
		}
	}
	if (flag == 1)
		printf("找到了，下标是：%d", i)
	else
		printf("找不到");
	return 0;
}
//4t编写代码;