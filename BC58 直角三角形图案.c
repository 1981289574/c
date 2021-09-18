#include <stdio.h>
 
int main()
{
    int num,i,j;
    while(scanf("%d",&num)!=EOF){
        for(i=1;i<=num;i++){
            for(j=1;j<=i;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
