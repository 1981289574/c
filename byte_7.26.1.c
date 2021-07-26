#define _CRT_SECURE_NO
#include<stdio.h>
//成功代码
int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);

	//把缓冲区的内容清理掉
	int tmp = 0;
	while (tmp=getchar() != '\n')
	{
		;
	}
	printf("请确认密码(Y/N):>");
	int ch = getchar();
	if (ch = 'Y')
	{
		printf("确认成功\n");

	}
	else
	{
		printf("确认失败\n");
	}
	return 0;

	//调试发现没有确认密码就输出结果了，出现错误，scanf已经读取了数据，而getchar读取了\n, 还没有等缓冲区输入数值，直接拿走了\n, 所以确认失败

}


//输入密码的判断

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//getchar时读取字符
//	//getchar返回的是字符，其实返回的字符是 ascll值（整数）
//	//读取结束或失败时，会返回EOF
//	//EOF-->
//	while((ch=getchar())!=EOF)//C库提供函数，从头读取
//	{
//		putchar(ch);
//
//	}
//	return 0;//输入ctrl+z停止调试
//}





//#define _CRT_SECURE_NO
// #include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	int ch = getchar();
//	if (ch = 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//
//调试发现没有确认密码就输出结果了，出现错误，scanf已经读取了数据，而getchar读取了\n,还没有等缓冲区输入数值，直接拿走了\n,所以确认失败
// 
//}
//只要在getchar读取缓冲区读取之前，将\n除去就可以了





//#define _CRT_SECURE_NO
// #include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	getchar();//将缓冲区的\n清理掉了,一个getchar只能清理一个字符
//	//调试输入abc def,依然有问题
//	//此时scanf读取到abc,而在缓冲区还有def，getchar又将读取def
//	printf("请确认密码(Y/N):>");
//	int ch = getchar();
//	if (ch = 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//
//
//}
