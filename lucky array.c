#include<stdio.h>
int main()
{
    int a[100000];
    int i,n,min,freq=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        min = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i] <min)
        min = a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==min)
            freq++;
    }
    if(freq % 2 != 0)
        printf("Lucky");
    else
        printf("Unlucky");
}

