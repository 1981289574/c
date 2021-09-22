#include <stdio.h>
int main()
{
    int n=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                printf(" ");
            }
            for(int j=0;j<n-i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
