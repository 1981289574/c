#include<stdio.h>
main()
{
    int t;
    while(~scanf("%d\n",&t))
    {
        if(t>0)
            printf("1\n");
        else if(t==0)
            printf("0.5\n");
        else
            printf("0\n");
    }
}
