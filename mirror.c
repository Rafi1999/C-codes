#include<stdio.h>
int main()
{
    int a[300][300],r,c,i,j;
    scanf("%d %d",&r,&c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=(c-1); j>=0; j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

