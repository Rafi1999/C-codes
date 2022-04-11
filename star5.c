#include<stdio.h>
int main()
{
    int j,i,c,d,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    /*for(row=n-1;row>=1;row--)
    {
        for(col=0;col<n-row;col++)
        {
            printf(" ");
        }
        for(col=0;col<row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }*/
}
