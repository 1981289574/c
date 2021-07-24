#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

求n的阶乘


非递归
#include <stdio.h>
int main()
{
    int i, n;
    int sum = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum * i;
    printf("%d!=%d", n, sum);
    printf("\n");
    return 0;
}
