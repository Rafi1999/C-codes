#include<stdio.h>
int main()
{
    int a[50],b[50],m[100],i,j,n1,n2;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        m[i]=a[i];
    }
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
    {
        printf("%d ",m[i]);
        m[i]=b[i];
    }
     for(i=0;i<n2;i++)
        printf("%d ",m[i]);

}
