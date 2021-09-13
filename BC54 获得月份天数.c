#include <stdio.h>
int Judge_Leapyear(int x)//判断是否是闰年
{
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int year, month, day;
    while (scanf("%d%d", &year, &month) != EOF)
    {
        if (Judge_Leapyear(year)==1)//根据返回值进行条件判断
        {
            if (month == 2)//将特殊情况放在一种判断的小部分里面
            {
                printf("29\n");
            }
            else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                printf("31\n");
            }
            else
            {
                printf("30\n");
            }
        }
       else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)//后再以此输出其他正常情况
        {
           printf("31\n");
       }
        else if (month == 2)
        {
            printf("28\n");
        }
        else
        {
            printf("30\n");
        }
    }
    return 0;
}
    





