#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>

//dest 是指向目标空间的
//src  是指向源字符串的

//1
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//\0
//}

//2
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//\0
//}

//3
//void my_strcpy(char* dest, char* src)
//{
//	//1. 拷贝字符
//	//2. 遇到\0 循环停止
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
// 

#include <assert.h>

//4
//void my_strcpy(char* dest, char* src)
//{
//	/*if (src == NULL || dest == NULL)
//	{
//		return;
//	}*/
//
//	assert(src != NULL);//断言 - release版本可以优化掉
//	assert(dest != NULL);
//	//assert(src && dest);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//健壮性
//鲁棒性

//5
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言 - release版本可以优化掉
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言 - release版本可以优化掉
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy - string copy - 字符创拷贝
//	//1
//	//char arr1[] = "abcdef";//[a b c d e f \0]
//	//char arr2[10] = "xxxxxxxxx";// [                        ]
//
//	//2 - 源字符串中一定要有\0
//	//char arr1[] = { 'a', 'b', 'c' };
//	//char arr2[10] = "xxxxxxxx";
//
//	//3 - 目标空间必须足够大
//	//char arr1[] = "abcdef";
//	//char arr2[3] = { 0 };
//
//	//4. 目标空间，必须可修改
//	char arr1[] = "abcdef";
//	const char* arr2 = "xxxxxxxxxxx";
//
//	char*ret = my_strcpy(arr2, arr1);
//
//	printf("%s\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	const int num = 10;//num是常变量
//	const int* p = &num;
//	//*(p + 1) = 0;//
//
//	//num = 20; //err
//
//	//const 修饰指针
//	//const 放在*的左边
//	//修饰的是指针指向的内容(*p),指针指向的内容，不能通过指针来改变了
//	//但是指针变量本身是可以改变的
//	//int n = 100;
//	//const int*  p = &num;  //int const*  p = &num;
//	//*p = 20;//err
//	//p = &n;
//	//printf("%d\n", num);
//
//	//const 放在*的右边
//	//修饰的是指针变量本身(p),指针变量本身（p）不能修改了 
//	//但是指针指向的内容(*p)可以修改
//	//
//	//int n = 100;
//	//int* const p = &num;
//	//*p = 20;//ok
//	//p = &n;//err
//
//	//printf("%d\n", num);
//	return 0;
////}
//
//int main()
//{
//	//char arr[] = "abcdef";
//	//const char* str = "qwer";
//	//printf("%s\n", arr);
//	//printf("%s\n", str);
//	//*arr
//	//*str
//
//	const char* str = "abcdef";
//	//把常量字符串首字符a的地址存放在str中
//	printf("%s\n", str);
//	printf("%c\n", *str);
//
//	//4
//
//	return 0;
//}


//int test()
//{
//	int a = 10;
//	return a;
//}
//int main()
//{
//	int ret = test();
//
//	return 0;
//}

//
//int* test()
//{
//	int a = 10;
//	return &a;//0x0012ff40
//}
//int main()
//{
//	int* ret = test();
//	//0x0012ff40
//	*ret = 0;
//
//	return 0;
//}


//
//size_t  - unsigned int
//size_t my_strlen(const char* str)
//
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}



//int main()
//{
//	//3-6 = -3
//	//10000000000000000000000000000011
//	//11111111111111111111111111111100
//	//11111111111111111111111111111101
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;//
//	c = ++a;//c=6 a=6
//	b = ++c, c++, ++a, a++;//c=8 b=7 a=8
//
//	b += a++ + c;//a=9 b=23 c=8
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//


//统计二进制中1的个数
//题目内容：
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1

//size_t count_bit_one(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
//
//
//size_t count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//size_t count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	size_t ret = count_bit_one(num);
//
//	printf("%u\n", ret);
//
//	return 0;
//}

//写一个代码，判断一个数是不是2的次方数
//8
//9


size_t count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	if ((n & (n - 1)) == 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}










