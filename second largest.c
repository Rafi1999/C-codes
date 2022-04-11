#include<stdio.h>
int main()
{
    int a[100],i,j,n,max,max1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        max=max1=a[0];
    for(i=1;i<n;i++)
    {
        if(max < a[i])
        {
         max1 = max;
         max = a[i];
        }
        else if(max1 <a[i] && a[i]!=max)
            max1 = a[i];
    }
    printf("Second largest %d",max1);
}
