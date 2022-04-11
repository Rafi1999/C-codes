#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    scanf("%d",&i);
    for(n=0,a=1;n<i;n++,a++)
    {
        a=a;
        b=a*a;
        c=a*a*a;
        printf("%d %d %d\n",a,b,c);
    }

}
