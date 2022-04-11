#include<stdio.h>
int main()
{
    long long A[10000],i,j,n;
    scanf("%lld",&n);
    A[1]=0;
    A[2]=1;

    for(i=3; i<=50; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
    }
    for(i=1;i<=n;i++)
        printf("%d",A[i]);
    return 0;
}
