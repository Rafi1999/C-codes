#include<stdio.h>
int main()
{
    int a[100],c,i,j,n,count=0,dup;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
             count=count+1;
             break;
            }
        }
    }
    printf("Duplicate = %d",count);
    return 0;
}
