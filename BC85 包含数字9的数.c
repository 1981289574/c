#include <stdio.h>
int main()
{
    int i = 0;
    int count = 0;
    for(i = 1;i <= 2019;i++)
    {
        int m = i;
        while(m)
        {
            if(m%10 == 9)
            {
                count++;
                break;
            }
            m/=10;
        }
    }
    printf("%d\n",count);
    return 0;
}
