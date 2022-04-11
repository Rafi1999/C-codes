#include<stdio.h>
int main()
{
    long long int i,n,sum=0;
    scanf("%lld",&n);
    for(i=0;;i++)
    {
        sum += i;
        if(sum==n)
            printf("%lld\n",i);
        else if(sum<=n)
        continue;
        else if(sum>n)
            printf("%lld\n",i-1);
        break;
    }
    return 0;
}
