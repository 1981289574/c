#include <stdio.h>

int main(){
    
    int a[10],i;
    int pos = 0,neg = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
            neg++;
        else if(a[i]>0)
            pos++;
        else
        {};
    }
    printf("positive:%d\n",pos);
    printf("negative:%d\n",neg);
    return 0;
}
