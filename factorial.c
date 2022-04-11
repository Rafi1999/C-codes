#include<stdio.h>
void factorial(int n)
{
    long long int f=1,i;
    for(i=1; i<=n; i++)
    {
        f = f*i;
    }
    printf("%lld\n",f);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        factorial(n);
    }
}
