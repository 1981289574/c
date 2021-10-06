#include<stdio.h>
int main()
{
    int M;
    while(~scanf("%d",&M))
    {
        if(M % 5 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
