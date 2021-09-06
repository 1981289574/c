#include<stdio.h>
int main()
{
    char c, x;
    while(scanf("%c", &c) == 1)
    {
        if(c >= 'a' && c <= 'z')
        {
            x = c - 32;
            putchar(x);
            printf("\n");
        }
        if(c >= 'A' && c <= 'Z')
        {
            x = c + 32;
            putchar(x);
            printf("\n");
        }
         
    }
    return 0;
 }
