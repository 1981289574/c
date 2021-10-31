//函数的嵌套调用与链式访问
//嵌套调用
#include<stdio.h>
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++
		)
	{
		new_line();
	}
}

int main()
{
	three_line();
		return 0;
}
//链式访问
int main()
{
	char arr[20]="hello";
	int ret=strlen(strcat(arr,"bit"));//stract是连接的意思
	printf("%d\n",ret);//输出8，hellobit
	return 0;//
}
