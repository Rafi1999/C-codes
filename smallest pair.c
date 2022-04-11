#include<stdio.h>
int main()
{
    int n,m,i,j,k,a[100000],small,X;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
            for(j=0;j<m;j++)
            {
            scanf("%d",&a[j]);
            }
        small = 100000;
        for(j=0;j<m-1;j++)
        {
            for(k=j+1;k<m;k++)
            {
                X = a[j]+a[k]+k-j;
                if(X<small)
                    small = X;
            }
        }
        printf("%d\n",small);
    }

    return 0;
}

