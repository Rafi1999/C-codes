#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,sum,sum1;
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
         sum=0;
        for(j=0,sum=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
         printf("%d\n",sum);
    }
     for(j=0;j<c;j++)
    {
        sum1=0;
        for(i=0;i<r;i++)
        {
            sum1=sum1+a[i][j];
        }
        printf("%d\n",sum1);
    }

}
