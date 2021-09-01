#include <stdio.h>

int main()
{
    int score =0;
    while((scanf("%d",&score)) !=EOF)
    {
        if(score>=90 && score<=100)
            printf("Perfect\n");
    }
    return 0;
}
