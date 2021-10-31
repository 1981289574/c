//值传递，改变的是形参的值，而不会返回到实参去
//实参传给形参时，形参是实参的一份临时拷贝
void Swap(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
//地址传递，实参和形参都改变
//*解引用：指针指向变量的内存地址
void Swap2(int *px, int *py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int num1 = 1, num2 = 2;
	Swap(num1, num2);
	printf("Swap1::num1=%d  num2=%d\n", num1, num2);
	Swap(&num1, &num2);
	printf("Swap2::num1=%d  num2=%d\n", num1, num2);
	return 0;
}
