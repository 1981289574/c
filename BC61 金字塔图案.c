#include <stdio.h>
int main(void)
{
	int n = 0;
	while (~scanf(" %d", &n))
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n-1-i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < i+1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}
