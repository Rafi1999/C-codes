#include<stdio.h>
int main()
{
    int a[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("Array Not sorted");
            return;
        }
    }
    printf("Array sorted");
}
