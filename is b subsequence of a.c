#include<stdio.h>
int main()
{
    int a[10000],b[100000],c[100000],x,y,i,j,k,flag=0;
    scanf("%d %d",&x,&y);
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<y;i++)
        scanf("%d",&b[i]);
    int len = sizeof(a[10000])/sizeof(int);
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            for(k=i;k<=j;k++)
                c[k]=a[k];
        }
    }
    for(k=0;k<y;k++)
    {
        if(b[k]==c[k])
            flag = 1;
        else
            break;
    }
    if(flag!=0)
        printf("Yes");
    else
        printf("No");
}
