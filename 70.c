#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    if(n%2==0)
    {
        for(a=n+1;a<=n+12;a+=2)
            printf("%d\n",a);
    }
    else
    {
        for(b=n; b<=n+12;b+=2)
            printf("%d\n",b);
    }
}

