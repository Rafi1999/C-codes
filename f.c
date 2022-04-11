#include<stdio.h>
#include<stdlib.h>
int getsum()
{
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    sum = x + y;
    return sum;
}
int main()
{
    int a,b,sum;
    sum = getsum();
    printf("%d\n",sum);
}
