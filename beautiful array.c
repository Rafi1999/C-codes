#include<stdio.h>
int main()
{
    int a[10000],i,j,n,m,flag;
    scanf("%d",&n);
    for(i=0,flag=0;i<n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0,flag=0;j<m-1;j++)
        {
            if((a[j]+a[j+1] == a[j]) || (a[j]+a[j+1] == a[j+1]))
                flag=1;
        }
        if (flag != 0)
            printf("yes\n");
        else
            printf("no\n");
    }
        return 0;
}
