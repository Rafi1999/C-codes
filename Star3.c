#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&i);
    for(a=0;a<i;a++)
    {
        for(b=0;b<i-a;b++)
        {
            printf(" ");
        }
        for(c=0;c<i-b;c++)
        {
            printf(" ");
        }
        for(d=0;d<i-c;d++)
        {
            printf("*");
        }
        printf("\n");
    }
}
