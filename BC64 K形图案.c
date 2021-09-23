#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
	{
        int i,j;
        for(i=0;i<n+1;i++)
		{
            for(j=0;j<n+1-i;j++)
			{
                printf("* ");
            }
            printf("\n");
        }
        int m,k;
        for(m=0;m<n;m++){
            for(k=0;k<m+2;k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
