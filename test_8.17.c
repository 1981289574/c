#include <stdio.h>

int main()
{
    float score_one,score_two,score_three,sum,ave;
    scanf("%f %f %f",&score_one,&score_two,&score_three);
    sum=score_one+score_two+score_three;
    ave=sum/3;
    printf("%0.2f %0.2f",sum,ave);
    
    return 0;
}
