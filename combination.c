#include<stdio.h>
#include<math.h>
double fact(n)
{
    double i,f=1;
    for(i=1;i<=n;i++)
    {
        f = f*i;
    }
    return f;
}
long long int main()
{
    long long int n,r,c,x,y;
    scanf("%lld %lld",&n,&r);
     x = fact(n);
     y = (fact(r)*fact(n-r));
     c = x/y;
    printf("%lld\n",c);
    return 0;
}
