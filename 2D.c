#include<stdio.h>
int main()
{
    int a[4][6],b[4],r,c,i,j,k,l,sum=0;
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
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d \n",sum);
    }

}
