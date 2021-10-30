#include<stdio.h>
int main()
{
    int n,i;
    double min,max,aver,sum=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lf",&a[i]);
    min=max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {max=a[i];}
        if(min>a[i])
        {min=a[i];}
        sum+=a[i];
    }
    aver=sum/n;
    printf("%.2lf %.2lf %.2lf",max,min,aver);
}
