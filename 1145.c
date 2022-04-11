#include<stdio.h>
int main()
{
    int n,i,x,y,a,b,c;
    scanf("%d %d",&x,&y);
    for(n=x;n<=y;n+=3)
    {
        a=n-2;
        b=n-1;
        c=n;
        printf("%d %d %d\n",a,b,c);
    }
}
