#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表

int main() 
{
    int i, j;  // i, j控制行或列 
    int n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n;j++)
            // %4d 控制宽度为两个字符，且右对齐；如果改为 %-2d 则为左对齐
            // \t为tab缩进
            printf("%d*%d=  %2d \t", i, j, i * j);
        printf("\n");
    }
    return 0;
}
