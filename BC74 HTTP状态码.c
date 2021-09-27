#include<stdio.h>
int main(void)
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(200==n)
            printf("OK\n");
        else if(202==n)
            printf("Accepted\n");
        else if(400==n)
            printf("Bad Request\n");
        else if(403==n)
            printf("Forbidden\n");
        else if(404==n)
            printf("Not Found\n");
        else if(500==n)
            printf("Internal Server Error\n");
       else if(502==n)
           printf("Bad Gateway\n");
    }
}
