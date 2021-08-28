int main()
{
    int i = 0;
    for(i=9999;i<=99999;i++)
    {
        int a=i/10000;
        int a1 = i%10000;
        int b=i/1000;
        int b1 = i%1000;
        int c=i/100;
        int c1 =i %100;
        int d = i/10;
        int d1=i%10;
        if((a*a1)+(b*b1)+(c*c1)+(d*d1)==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
