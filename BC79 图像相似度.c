#include<stdio.h>
int main()
{
	int m, n;
	int a[100][100], b[100][100];
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	int c = m * n;
	float k=0, sum;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j]==b[i][j])
			{
				k++;
			}
		}
	}
	sum = (k / c)*100.0;
	printf("%.2f", sum);
	return 0;
}
