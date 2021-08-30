#include<stdio.h>
#include<string.h>
int main()
{
    int c,a=0,b=0,e=0;
    char o[100];
    scanf("%s",&o);
    c=strlen(o)-1;
    for(int i=0;i<c;i++)
    {
        if(o[i]=='A')
        {
            a++;
        }
        if(o[i]=='B')
        {
            b++;
        }
        if(o[i]=='E')
        {
            e++;
        }
    }
    if(a>b&a>e)
    {
        printf("A");
    }
    else if(b>a&b>e)
    {
        printf("B");
    }
    else 
    {
        printf("E");
    }
    return 0;
}
