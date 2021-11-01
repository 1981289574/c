#include <stdio.h>

int main()
{
    int a,b=0,c=100,i=0,d;
    scanf("%d",&a);
    for(i;i<a;i++)
    {
        scanf("%d ",&d);
        if(d>b)
            b=d;
        if(d<c)
            c=d;
    }
    printf("%d",b-c);
}
