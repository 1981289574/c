
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归实现strlen
int Strlen(char* str)
{
	if (*str != '\0')
		return 1 + Strlen(str + 1);//str++
	else
		return 0;
}

int main()
{
	char arr[] = "abc";
	int len = Strlen(arr);
	printf("%d\n", len);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
//非递归实现strlen
#include <stdio.h>
int Strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abc";
	int len = Strlen(arr);
	printf("%d\n", len);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 
 字符串逆序（递归实现）
void reverse_string(char* string) 
{
	if ('\0' != *(++string)) 
	{
		reverse_string(string);
	}
	printf("%c", *(string - 1));
}
int main() 
{
	char* a = "abcdef";
	reverse_string(a);
	printf("\n");
	return 0;
}



