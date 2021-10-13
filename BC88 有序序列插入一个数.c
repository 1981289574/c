#include<stdio.h>
int main()
{
    int n,k;

    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;++i)
    {
    scanf("%d ",&a[i]);
    }
    
    
    int j=0;       
    scanf("%d",&k);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<k)
            j++;
    }
    for(int b=n;b>j;b--)
    {
        a[b]=a[b-1];
    }
    
    a[j]=k;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
   
} 
