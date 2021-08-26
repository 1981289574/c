#include<stdio.h>
int main()
{
    float weight,height;
    float BMI;
    scanf("%f %f",&weight,&height);
    BMI=weight/(height*height);
    if (BMI>=18.5&&BMI<=23.9)
        printf("Normal");
    else
        printf("Abnormal");
    return 0;
}
