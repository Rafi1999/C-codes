#include<stdio.h>
int main()
{
    int a,x,y,n;
    double d;
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else
        {
         d = x/(y*1.00);
         printf("%.1lf\n",d);
        }
    }
    return 0;
}
