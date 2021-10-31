//写一个函数判断这一年是不是闰年
int is_leap_year(int n)
{
	for (n = 1000; n <= 2000; n++)
	{
		if (((n % 4 == 0) && (n % 100 != 0) )|| (n % 400 == 0))
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int y = 0;
	for(y=1000;y<=2000;y++)
	{ 
		if (is_leap_year(y) == 1)
		{
			printf("%d是闰年\n", y);
		}
		else
		{
			printf("不是闰年");
		}
		return 0;
	}
}
