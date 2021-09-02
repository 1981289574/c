#include<stdio.h>
int main()
{
	int input;
	while (scanf("%d", &input) != EOF)
	{
		if (input >= 60)
			printf("Pass\n");
		else
			printf("Fail\n");
	}
	return 0;
}
