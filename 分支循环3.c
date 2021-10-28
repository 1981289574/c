#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//猜数字游戏
//1.电脑随机生成一个1-100之间的数字
//2.玩家猜数字
//如果猜对了，就提示猜对了
//如果猜大了，就提示猜大了
//如果猜小了，就提示猜小了
//3.可以反复玩
#include<stdlib.h>
void menu()
{
	printf("#########################\n");
	printf("####### 1.play ##########\n");
	printf("####### 0.exit ##########\n");
	printf("#########################\n");
}
void game()
{
	//1.生成随机数
	//2.猜数字
	int ret = rand();
	printf("%d", rand);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
				printf("猜数字\n");
				game();
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
				printf("选择错误，重新选择，应选择1或0");
				break;
		}

	} while(input);
	return 0;
}

//RAND_MAX
//123
//0x123-- 
//0123---八进制
