#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//实现递归的两个条件
//1.存在限制条件，当满足这个条件时，递归不在继续
//2.每次用递归调用后越来越接近这个限制条件

//eg:接受一个整型值（无符号），按照顺序打印他的每一位
//
//输入：1234，输出 1 2 3 4

//思路：
//1234%10-->4
//1234/10-->123
//123%10-->3
//123/10-->12
//12%10-->2
//12/10-->1
//1%10-->1

//递归的思想
//函数自己调用自己
//printf（1234）：
//printf(123)+4
//printf(12)+3+4
//printf(1)+2+3+4
//printf(1)+printf(2)+printf(3)+printf(4)

void print(unsigned int n)
{

	if (n > 9)
	{
		print(n / 10);//123
	}
	printf("%d ", n % 10);
} 
int main()
{
	//eg:接受一个整型值（无符号），按照顺序打印他的每一位
	unsigned int num = 0;
	scanf("%d", &num);//1234
	print(num);
	return 0;
}
