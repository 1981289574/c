#include<stdio.h>

int main()
{
	int n,m,i,j,sum;
	scanf("%d %d",&n,&m);
	int a[n][m];
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]); 
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]>0)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("%d\n",sum);
	return 0;
}
