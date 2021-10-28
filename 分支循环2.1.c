//4t编写代码，演示两个字符从两端移，向中间汇聚动

//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//welc############!!!!
//....
//welcome to bit!!!!!!
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "####################";
//	char ch = "abc";
//	int left = 0;
//	int right =strlen(arr2)-1 ;
//	while(left<=right)//使用的是while
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //单位是毫秒
//		system("cls");//执行系统命令，清空屏幕，可以从命令提示符中输入cmd来观察
//		//输出cls作用为清除屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}

//5t编写代码，模拟用户登录详情，并且只能登录三次。
//（只允许输入三次密码
//如果密码正确则登陆成功，
//如果三次输入错误，则退出程序
int main()
{
	int i=0;
	int j=0;
	//假设真实的密码是字符串：“123456”
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", &password);
		//两个字符串的比较不能用等号==,eg:password=="123456";
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码错误，退出登录");
	return 0;
}
