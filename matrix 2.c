#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],r,c,i,j,flag=0;
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
        for(j=0;j<c;j++)
        {
            if(a[i][j] != b[i][j])
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag==1)
        printf("Not Equal Matrix");
    else
        printf("Equal Matrix");
    return 0;
}
