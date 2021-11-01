#include <stdio.h>
int main()
{

    int a[50];
    int n;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);   
    }
    int sum = 0;
    for(i = 0;i<n;i++){
        sum = sum+a[i];
    }

    printf("%d",sum);

}
