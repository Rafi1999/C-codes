#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],r,c,i,j,sym;
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
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<r;i++)
    {
        sym=0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=b[i][j])
                sym=1;
                break;
        }
    }
    if(sym==1)
        printf("Not Symmetric");
        else
            printf("Symmetric");
}

