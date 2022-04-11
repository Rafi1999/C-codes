#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    long long int a[99000],b[99000],i,j,n,flag=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;j++)
        scanf("%lld",&b[i]);
    for(i=0;i<n;j++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            flag++;
            else
                break;
        }
    }
    if(flag!=0)
        printf("Yes\n");
    else
        printf("No\n");
}
