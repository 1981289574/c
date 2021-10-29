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
#include<string.h>
#include<time.h>

//void menu()
//{
//	printf("#########################\n");
//	printf("####### 1.play ##########\n");
//	printf("####### 0.exit ##########\n");
//	printf("#########################\n");
//}
//时间
//时间戳
//C语言怎么获得时间戳
//time
//time_t-long long int
//time_t
//void game()
//{
//
//	int guess = 0;
//	//1.生成一个随机数
//	//srand((unsigned)time(NULL));
//	int ret = rand() % 100 + 1;//0-99+1-->1-100
//	printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d",&guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//			printf("猜对了\n");
//			break;
//	}
//}
//int main()
//{
//	int input = 0;
//	//
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//				printf("猜数字\n");
//				game();
//				break;
//		case 0:
//				printf("退出游戏\n");
//				break;
//		default:
//				printf("选择错误，重新选择，应选择1或0");
//				break;
//		}
//
//	} while(input);
//	return 0;
//}

//RAND_MAX
//123
//0x123-- 
//0123---八进制


////goto 语句
//int mian()
//{
//	flag;//标记
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//
//	return 0;
//}

//关机程序
//只要程序运行起来，电脑就倒计时关机一分钟
//一分钟后就关机，如果在一分钟内输入我爱你，就取消关机
//shoudown -s -t 秒数  几秒后关机
//shoudown -a   取消关机
int main()
{
	char input[20] = { 0 }; 
	system("shutdown -s -t 60");
	printf("请注意，你的电脑将在一分钟内关机，如果输入：我爱你，就取消关机\n");
	again:
	scanf("%s", input);
	if (0==strcmp(input,"我爱你"))//2个字符串哦度不能直接用==比较
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//Debug调试版本
//Release发布版本
