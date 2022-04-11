#include<stdio.h>
int main()
{
    long long int a[10],b=0,i,j,n;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    j=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>j)
        {
            j=a[i];
            b=i+1;
        }
    }
    printf("Max Value %lld and location %lld\n",j,b);

}
