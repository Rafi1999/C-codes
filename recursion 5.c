#include<stdio.h>
#include<math.h>
double fact(n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    long long int n,r,c;
    scanf("%lld %lld",&n,&r);
    if(n==r)
        c=1;
    else
    c = fact(n)/(fact(r)*fact(n-r));
    printf("%lld\n",c);
}
