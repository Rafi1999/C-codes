#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];
    int i,j,k,n,m,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    if(n>m)
        x=n;
    else x=m;
    for(k=0;k<x;k++)
    {
        if(k>=n)
        a[k]=0;
        if(k>=m)
        b[k]=0;
        c[k]=a[k]+b[k];
    }
    for(k=0;k<x;k++)
    {
        printf("array[%d] = %d\n",k,c[k]);
    }
    return 0;
}
