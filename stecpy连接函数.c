//IO函数  input/output   printf   scanf    getchar    putchar
//字符串操作数    strlen  strcmp     strcpy    struct 
//字符操作函数    tolower转小写    toupper转大写
//内存操作函数    memcpy   memset   memcmp
//时间/日期函数   time...
//数学函数        sqrt开方   abs  fabs 求绝对值    pow求次方
//其他函数

strcpy
char *strcpy（char*destination,const char*source);
memst
void *,e,set(void*ptr,int value,size_t num);

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
