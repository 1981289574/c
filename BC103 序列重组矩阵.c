#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n*m];
    int i;
    for(i=0;i<n*m;i++){
        scanf("%d",&arr[i]);
    }
    int j;
    for(i=0;i<n*m;i++){
        
            printf("%d ",arr[i]);
            if((i+1)%m==0)
                printf("\n");
        
    }
    
    
    return 0;
}
