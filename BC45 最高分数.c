#include <stdio.h>
int main(void)
{
    int a=0,b=0,c=0;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        int m=a>b?a:b;
        m=m>c?m:c;
        printf("%d\n",m);
    }
    return 0;
}
