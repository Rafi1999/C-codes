#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],r,c,i,l,j,k;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=r,l=1;i>=1;i--)
    {
        k=1;
        for(j=1;j<=c;j++)
        {
            b[k][l]=a[i][j];
            k++;
        }
        l++;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
