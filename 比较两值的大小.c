int get_max(int x, int y)//eg:int max=(1,get_max(1,get_max(4,5))相当于int get_max(1,5)
{
	return(x > y) ? x : y;
}
int main()
{
	int num1 = 10, num2 = 20;
	int max = get_max(num1, num2);
	printf("max=%d\n", max);
	return 0;
}
