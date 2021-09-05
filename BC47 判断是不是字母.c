#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF)
    {
        if(a<='Z'&&a>='A')
            printf("%c is an alphabet.\n",a);
        else if(a<='z'&&a>='a')
            printf("%c is an alphabet.\n",a);
        else if(a=='\n')
            continue;
        else
            printf("%c is not an alphabet.\n",a);
    }
    return 0;
}
