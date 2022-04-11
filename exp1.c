#include<stdio.h>
int a = 0,b = 1;
int f1(int a)
{
    return(a+b);
}
int f2(int a)
{
    b = f1(a+1)+1;
    return (b);
}
int main()
{
    int c;
    for(c=1; c<=5; ++c)
    {
        b=b+f2(a+1)+1;
        printf("%d ",b);
    }
}
