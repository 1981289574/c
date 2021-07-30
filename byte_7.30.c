#include <limits.h>

#include <stdio.h>
//小乐乐与进制转换
// 
#include <stdio.h>

int main()
{
    int num = 0;
    int arr[50] = { 0 };
    //输入
    scanf("%d", &num);
    //转换
    int i = 0;
    while (num)
    {
        arr[i] = num % 6;
        i++;
        num = num / 6;
    }
    //输出
    for (i--; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

//小乐乐排电梯
#include <stdio.h>

int main()
{
    int n = 0;
    //输入
    scanf("%d", &n);
    //计算
    int t = n / 12 * 4 + 2;
    //输出
    printf("%d\n", t);

    return 0;
}

//小乐乐与欧几里得
#include <stdio.h>

/*
int main()
{
    long long n = 0;
    long long m = 0;
    //输入
    scanf("%d %d", &n, &m);
    //计算
    //1. 计算最大公约数
    long long max = (m>n)?(n):(m);
    while(1)
    {
        if((m%max==0) && (n%max==0))
            break;
        max--;
    }

    //2. 计算最小公倍数
    long long min = (m>n)?(m):(n);
    while(1)
    {
        if((min%m==0)&&(min%n==0))
        {
            break;
        }
        min++;
    }

    //3. 求和
    long long sum = min+max;
    //打印
    printf("%lld\n", sum);

    return 0;
}
*/

int main()
{
    long long n = 0;
    long long m = 0;
    //输入
    scanf("%d %d", &n, &m);
    //计算
    long long n2 = n;
    long long m2 = m;

    //1. 计算最大公约数
    long long c = 0;
    while (c = m2 % n2)
    {
        m2 = n2;
        n2 = c;
    }

    //2. 最小公倍数
    long long min = m * n / n2;
    printf("%lld", min + n2);

    return 0;
}


//BC35-判断字母
#include <stdio.h>

int main()
{
    //多组输入
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        getchar();//处理\n
    }

    return 0;
}

//空心正方形图案

#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 1; i <= n; i++)
        {
            //打印一行
            int j = 0;
            for (j = 1; j <= n; j++)
            {
                if (i == 1 || i == n || j == 1 || j == n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}


//公务员面试

#include <stdio.h>

int main()
{
    //输入
    int i = 0;
    int sc = 0;
    int sum = 0;
    int max = 0;//假设0就是最高分
    int min = 100;//假设100就是最低分

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &sc);
        sum += sc;

        if (sc > max)
            max = sc;

        if (sc < min)
            min = sc;
    }

    //计算
    double avg = (sum - max - min) / 5.0;
    //输出
    printf("%.2lf\n", avg);

    return 0;
}


//三角形判断

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    //while(scanf("%d %d %d",&a, &b, &c) != EOF)

    while (~scanf("%d %d %d", &a, &b, &c))
    {
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            //是不是等边
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }

    return 0;
}






//
//int main()
//{
@@ -243,55 +485,55 @@
//}

//自定义类型

#include <string.h>

struct Book
{
	char name[20];
	float price;
	char id[10];
};


void print1(struct Book b)
{
	printf("书名: %s\n", b.name);
	printf("价格: %f\n", b.price);
	printf("书号: %s\n", b.id);

	//*(b.name);
}

void print2(struct Book* pb)
{
	/*printf("书名: %s\n", (*pb).name);
	printf("价格: %f\n", (*pb).price);
	printf("书号: %s\n", (*pb).id);*/

	printf("书名: %s\n", pb->name);
	printf("价格: %f\n", pb->price);
	printf("书号: %s\n", pb->id);
}

int main()
{
	struct Book b = {"C语言程序设计", 55.5f, "C20190201"};
	print2(&b);

	//print1(b);

	//b.price = 100.0f;
	////字符串拷贝 -strcpy - 库函数 - string.h
	//strcpy(b.name, "数据结构");
	//print1(b);

	//结构成员访问操作符
	//结构变量.成员名
	//结构体指针->成员名
	// 
	//(*结构体指针).成员名

	return 0;
}
//
//#include <string.h>
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[10];
//};
//
//
//void print1(struct Book b)
//{
//	printf("书名: %s\n", b.name);
//	printf("价格: %f\n", b.price);
//	printf("书号: %s\n", b.id);
//
//	//*(b.name);
//}
//
//void print2(struct Book* pb)
//{
//	/*printf("书名: %s\n", (*pb).name);
//	printf("价格: %f\n", (*pb).price);
//	printf("书号: %s\n", (*pb).id);*/
//
//	printf("书名: %s\n", pb->name);
//	printf("价格: %f\n", pb->price);
//	printf("书号: %s\n", pb->id);
//}
//
//int main()
//{
//	struct Book b = {"C语言程序设计", 55.5f, "C20190201"};
//	print2(&b);
//
//	//print1(b);
//
//	//b.price = 100.0f;
//	////字符串拷贝 -strcpy - 库函数 - string.h
//	//strcpy(b.name, "数据结构");
//	//print1(b);
//
//	//结构成员访问操作符
//	//结构变量.成员名
//	//结构体指针->成员名
//	// 
//	//(*结构体指针).成员名
//
//	return 0;
//}
//
