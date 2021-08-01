#include<stdio.h>
 int main()
 {
     int n=0;
     int m=0;
     scanf("%d %d",&n,&m);
     //设max为最大公约数
     int max=n>m?m:n;
     //设min为最小公倍数
     int min=n>m?n:m;
     while(1)
      {
    if(m%max==0&&n%max==0)
        {
         break;
         }
         max--;
     }
     while(1)
     {
        if(min%m==0&&min%n==0)
         {
             break;
        }
         min++;
     }
     printf("%d\n",max+min);
     return 0;
 }
