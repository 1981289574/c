#include<stdio.h>
int main()
{
    int n,h,m;
    scanf("%d %d %d",&n,&h,&m);
    if(m%h)
        n=n-m/h-1;
    else n=n-m/h;
    printf("%d",n);
    return 0;
}
