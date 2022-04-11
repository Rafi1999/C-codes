#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],d[10][10],r,c,i,j,flag;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
     for(int j=(c-1);j>=0;j--)
      {
 printf("%d ",a[i][j]);
      }
      printf("\n");
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[i][j]=a[i][j];
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(
                flag=1;
        }
    }
    if(flag==0)
        printf("Not Mirror");
    else printf("Mirror");

}


