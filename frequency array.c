#include<stdio.h>
int main()
{
    long long int a[100000],n,m,i,j,freq[100000],count;
    scanf("%lld %lld\n",&n,&m);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(j=1;j<=m;j++)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            if(j==a[i])
            count++;
        }
        freq[j]=count;
    }
    for(j=1;j<=m;j++)
    {
        printf("%lld\n",freq[j]);
    }
    return 0;
}
