#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d",&i);
    for(a=1;a<=i;a++)
    {
        for(b=1;b<=i-a;b++)
        {
            printf(" ");
        }
        for(c=1;c<=a;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
