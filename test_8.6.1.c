#include<stdio.h>
int main()
{
    int ch = 0 ;
    while((ch=getchar())!=EOF)
    {
        getchar();
        if((ch=='A')||(ch=='a')||(ch=='E')||(ch=='e')||(ch=='I')||(ch=='i')||(ch=='O')||(ch=='o')||(ch=='U')||(ch=='u'))
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    return 0;
}
