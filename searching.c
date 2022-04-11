#include<stdio.h>
int main()
{
    int a[100][100],x,i,j,r,c,flag=0;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    scanf("%d",&x);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(x==a[i][j])
                flag=1;
            else continue;
        }
    }
    if(flag==0)
        printf("will take number\n");
    else
        printf("will not take number\n");

}
