#include<stdio.h>
int main()
{
    int n,i,fib=0,i1=1,i2=1;
    scanf("%d",&n);
    if(n==1 || n==2)
        printf("Fibonachi number is 1\n");
    else
    {
        for(i=0;i<n-2;i++)
        {
            fib = i1+i2;
            i1=i2;
            i2=fib;
        }
        printf("Fibonachi Number is %d\n",fib);
    }
    return 0;
}
