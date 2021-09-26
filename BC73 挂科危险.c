#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    if(n>=0&&n<=30)
    {
        if(n>=10)
        {
            printf("Danger++\n");
        }
         if(n>=4&&n<=9)
        {
            printf("Danger\n");
        }
        if(n>=0&&n<=3)
        {
            printf("Good\n");
        }
    }
    
    
    return 0;
}
