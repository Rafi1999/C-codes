#include<stdio.h>
int main()
{
    int a[10],o[10],e[10],i,j=0,k=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
           e[j]=a[i];
           j++;
        }
        else
        {
            o[k]=a[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("Even %d \n",e[i]);
    }
    for(i=0;i<k;i++)
    {
        printf("Odd %d ",o[i]);
    }
    printf("\n\n");
}
