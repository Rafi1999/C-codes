#include<stdio.h>
int main()
{
    int a,b,c,e,f,g,i,n;
    scanf("%d",&i);
    for(n=0,a=1;n<i;n++,a++)
    {
        a=a;
        b=a*a;
        c=a*a*a;
        e=a;
        f=b+1;
        g=c+1;
        printf("%d %d %d\n",a,b,c);
        printf("%d %d %d\n",e,f,g);
    }

}

