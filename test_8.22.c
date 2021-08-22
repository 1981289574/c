#include <stdio.h>

int main()
{
	int ch = 0;
	//EOF -- end of file
	while ((ch = getchar()) != EOF)
	{
		//putchar(ch + 32);
        //printf("\n");
        printf("%c\n", ch+32);
		getchar();//读取\n
	}

	return 0;
}
