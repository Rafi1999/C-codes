#include<stdio.h>
int main()
{
    int a[100],o[100],e[100],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        {
            e[i]=a[i];
            printf("even %d\n",e[i]);
        }
        else
        {
            o[i]=a[i];
            printf("odd %d\n",o[i]);
        }
    }
}
