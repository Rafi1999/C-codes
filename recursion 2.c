#include<stdio.h>
long long int factorial(int n)
{
    if(n==1)
        return 1;
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    long long int a;
    scanf("%d",&n);
    a = factorial(n);
    printf("%lld\n",a);
}
