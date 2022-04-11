#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,size,count=0;
    scanf("%d %d",&r,&c);
    size=(r*c)/2;
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
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>size)
        printf("Sparse matrix");
    else
        printf("Not sparse matrix");
    return 0;
}
