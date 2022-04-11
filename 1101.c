#include<stdio.h>
int main()
{
    int a,b,n,sum=0;
    while(1)
    {
    scanf("%d%d",&a,&b);
    if(a<=0 || b<=0)
        break;
    else
    {
        sum=0;
    if(a<b)
    {
        for(n=a;n<=b;n++)
        {
            printf("%d ",n);
            sum+=n;
        }
        printf("Sum=%d\n",sum);
    }
    else if(a>b)
    {
        for(n=b;n<=a;n++)
        {
            printf("%d ",n);
            sum+=n;
        }
        printf("Sum=%d\n",sum);
    }
    }
    }

    return 0;
}
