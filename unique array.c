#include<stdio.h>
int main()
{
    int a[100],b[100],n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c = 1;
        if(a[i]!= -1)
        {
            for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                {
                    c++;
                    a[j]=-1;
                }
        }
        }
        b[i]=c;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!= -1)
        {
            if(b[i]==1)
                printf("%d\n",a[i]);
        }
    }
}
