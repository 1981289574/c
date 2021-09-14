#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strcpy,strcat,strcmp长度不受限制的字符串函数！！不够安全，引入strncpy，strncat，strncmp长度受限制的字符串函数！！较安全
//1.2strcpy

//1.3stract返回的是目标空间的起始地址
//my_stract(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找到目标字符串的末尾\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加字符串直到\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy——字符拷贝
//	//strcat——字符串连接-字符串追加
//	char arr1[] = "abc";
//	strcat(arr1, "def");
//	/*2.
//	* char arr1[20]="abc;
//	* char arr2[]={'d','e','f','\0'};
//	* strcat(arr1, arr2);
//	* 
//	*/
//	/*3.
//	* char arr1[20]="abc;
//	* char arr2[]={'d','e','f','\0'};
//	* my_stract(arr1, arr2);
//	*
//	*/
//	printf("%s\n", arr1);//abcdef
//	//printf("%s", my_stract(arr1, arr2));
//
//	return 0;
//}



////1.4strcmp是比较的字符串的内容，而不是长度
//my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);//解引用
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	//strcmp是比较的字符串的内容，而不是长度
//
//	char arr1[]="abcdef";
//	char arr2[] = "abq";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	if (ret > 0)
//		printf(">\n");
//	if (ret = 0)
//		printf("=\n");
//	//printf("%d\n", ret);
//
//	return 0;
//
//}

//B站KMP 视频
//strstr 字符串查找函数


//strtok
//192.1668.2.121
// 切分字符串
//192
//168
//2
//121
//zpw@bitedu.tech
//zpw
//@
//Bitedu
//tech

//int main()
//{
//	char arr1[] = "zpw@.bitedu.tech";
//
//	char arr2[100] = { 0 };//临时数据
//	char sep[] = "@.";
//	char* ret = NULL;
//
//	strcpy(arr2, arr1);
//	//分割字符串
//	for (strtok(arr2, sep);ret!=0;ret=strtok(NULL,sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	/*strtok(arr2, sep);
//	strok(NULL, sep);*/
//
//	return 0;
//
//}


//memcpy 内存拷贝（三个参数）


my_memcpy(void* dest, const void* src, size_t count)//实现不重叠拷贝
{
	//
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9.10 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr1,10*zizeof(int));
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d", arr2[i]);
	}
	return 0;
}

void* memmove=(void* dest, const void* src, size_t count)//实现重叠拷贝和不重叠拷贝，比memcpy实用性更强
//void* 是一种指针类型
