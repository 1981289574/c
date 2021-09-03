#include<stdio.h>
int main(void)
{
    int n = 0;
    while(scanf("%d",&n) != EOF)
    {
        if(n%2==0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
    return 0;
}
