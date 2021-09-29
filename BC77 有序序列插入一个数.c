#include<stdio.h>
int main()
{
    int a[51],b,c,d,e,f,add;
    scanf("%d",&b);
    for(c=0;c<b;c++)
        scanf("%d",&a[c]);
    scanf("%d",&add);
    for(e=0;e<b;e++)
    {
    if(add<a[0])
    {
        for(d=0;d<b;d++)
        {
        a[b-d]=a[b-d-1];
        }
        a[0]=add;
        break;
    }
    if(add>a[b-1])
    {
        a[b]=add;
    break;
    }
    if(add>a[e]&&add<a[e+1])
    {
        for(f=0;f<b-e-1;f++)
        {
        a[b-f]=a[b-f-1];
        }
    a[e+1]=add;
    break;
    }
    }
    for(c=0;c<=b;c++)
        printf("%d ",a[c]);
    return 0;
}
