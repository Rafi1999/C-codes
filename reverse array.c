#include<stdio.h>
int main()
{
    long long int a[100000],i,j,n,k,s;
    scanf("%d",&n);
    s = n;
    for(k=0;k<s;k++)
    {
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%lld ",a[j]);
    }
    }
}
