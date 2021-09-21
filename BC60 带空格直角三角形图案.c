#include<stdio.h>
int main()
{
    int n, i, j;
    while (~scanf("%d", &n))
    {
        for (i = 0; i < n; i++)
        {
            for (int k = 0; k < 2 * n - 2 - 2 * i; k++)
                {
                    printf(" ");
                }
            for (j = 0; j <= i; j++)
            {
                
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
