#include<stdio.h>
#include<math.h>
int main()
{
    long long int a[100000];
    int n,i,j,count=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    while(1)
    {
        for(j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            a[j] = a[j]/2;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        count++;
        else break;
    }
    printf("%d\n",count);
}
