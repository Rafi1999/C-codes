#include<stdio.h>
int min(int a[],int n)
{
    int j,y;
    y  = 1e9;
    for(j=0;j<n;j++)
        {
            if(y>a[j])
                y = a[j];
        }
    return y;
}
int max(int a[],int n)
{
    int i,x;
    x = -1e9;
    for(i=0;i<n;i++)
        {
            if(x<a[i])
                x = a[i];
        }
        return x;
}
int main()

{
    int a[10000],n,m;
    scanf("%d",&n);
    for(m=0;m<n;m++)
        scanf("%d",&a[m]);
    printf("%d %d\n",min(a,n),max(a,n));
    return 0;
}
