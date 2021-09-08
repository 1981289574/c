#include<stdio.h>
int main()
{
    int w=0,h=0;
    while(~scanf("%d %d",&w,&h))
    {
        float BMI=w/(h*h/10000.0);
        if(BMI<18.5)
            printf("Underweight\n");
        else if(BMI>=18.5&&BMI<=23.9)
            printf("Normal\n");
        else if(BMI>23.9&&BMI<=27.9)
            printf("Overweight\n");
        else
            printf("Obese\n");
    }
    return 0;
}
