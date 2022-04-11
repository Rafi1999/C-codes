#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        for(b=0;b<n-a;b++)
        {
            printf(" ");
        }
        printf("*");
        for(c=0;c<n-b;c++)
        {
            printf("**");
        }

        printf("\n");
    }

}
