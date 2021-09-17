#include <stdio.h>
int main()
{
  int i,j,n;
    while(scanf("%d",&n)!=EOF && n>=1 && n<=20)
    for(i=1;i<=n;i++)  //定义行
    {
        for(j=1;j<=n;j++) //定义列
        {
         printf("* ");
        }
         printf("\n");
     }
    return 0;
}
