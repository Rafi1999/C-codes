#include<stdio.h>
#include<math.h>
void equation(long long int x,long long int n)
{
    long long i,count=-1;
    for(i=0;i<=n;i+=2)
    {
        count += pow(x,i);
    }
    printf("%lld\n",count);

}
int main()
{
    long long int x,n;
    scanf("%lld %lld",&x,&n);
    equation(x,n);

}
