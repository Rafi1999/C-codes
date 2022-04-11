#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],m[10][10],i,j,n,r,c,sum;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum+=int (a[i]*b[j]);
           break;
        }
        m[i][j]= sum;
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d",m[i][j]);
        }
    }
}
