#include<stdio.h>
int main()
{
    float a = 0;
    scanf("%f",&a);
    int b = (int)a;
    b = b-(b/10)*10;
    printf("%d\n",b);
    
    
    
    return 0;
}
