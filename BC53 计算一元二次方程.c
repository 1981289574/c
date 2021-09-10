#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float x1,x2;
    while(~scanf("%f %f %f",&a,&b,&c))
    {
        if(a==0)
        {
            printf("Not quadratic equation");
        }
        else
        {
            float d=(b*b)-4*a*c;
            int i=1;
            if(d>0)
            {
                printf("x1=%.2f;x2=%.2f\n",(-b-i*sqrt(d))/(2*a),(-b+i*sqrt(d))/(2*a));
            }
            else if(d==0)
            {
                printf("x1=x2=%.2f\n",-b/(2*a));
            }
            else if(d<0)
            {
                float shib=(-b / (2*a));
                float xub=(sqrt(-d ) / (2*a));
                printf("x1=%.2lf-%.2fi;x2=%.2f+%.2fi\n",shib,xub,shib,xub);
            }
        }
    }
    return 0;
}
