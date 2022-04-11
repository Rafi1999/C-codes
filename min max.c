#include<stdio.h>
int main()
{
    int a[10000],b=0,i,max,min,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    min = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i] <min)
        min = a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i] == max)
        a[i] = min;
        else if(a[i] == min)
        a[i] = max;
    }
     for(i=0;i<n;i++)
        printf("%d ",a[i]);

}

