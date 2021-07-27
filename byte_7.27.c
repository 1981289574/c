#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c\n",&a)!=EOF)//再一次体会到超牛的scanf
    {
        if(a>='A'&&a<='Z'||a>='a'&&a<='z')
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
