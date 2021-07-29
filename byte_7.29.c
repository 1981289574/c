#include<stdio.h>
int main()
{
     int n,j,i=0, num[100];
     scanf("%d",&n);
     while(n/6!=0)
     {
         num[i]=n%6;
         n=n/6;
         i++;
     }
    printf("%d",n);
    for(j=i-1;j>=0;j--)
    {
        printf("%d",num[j]);
    }
    return 0;
}
