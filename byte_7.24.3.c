方法一：
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int year, a;
   for()
    scanf("%d", &year);
    if (year % 400 == 0)
        a = 1;
    else
    {
        if (year % 4 == 0 && year % 100 != 0)
            a = 1;
        else
            a = 0;
    }
    if (a == 1)
    {
        printf("%d 此年是闰年\n", year);
    }
    else
    {
        printf("%d 此年非闰年\n", year);
    }
    return 0;
}

方法二：
#include <stdio.h>
#include <string.h>
int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}

int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//判断y是否为闰年
		//函数
		//是闰年，返回1
		//不是闰年，返回0
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}

	return 0;
}
