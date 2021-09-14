#include <stdio.h>
int main()
{
    double a,b;
    char c;
    while(scanf("%lf%c%lf\n",&a,&c,&b)!=EOF)
    {
        if(c!='+'&&c!='-'&&c!='*'&&c!='/')
        {
            printf("Invalid operation!\n");
        }
        else
        {
            if(c=='/')
            {
                if(b==0)
                {
                    printf("Wrong!Division by zero!\n");
                }
                else
                    printf("%.4lf%c%.4lf=%.4lf\n",a,c,b,a/b);
            }
            else
            {
                if(c=='+')
                    printf("%.4lf%c%.4lf=%.4f\n",a,c,b,a+b);
                else if(c=='-')
                    printf("%.4lf%c%.4lf=%.4lf\n",a,c,b,a-b);
                else
                    printf("%.4lf%c%.4lf=%.4lf\n",a,c,b,a*b);
            }
        }
    }
    return 0;
}
