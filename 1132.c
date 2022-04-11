#include<stdio.h>
int main()
{
    int a,b,n,m,sum=0;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        for(n=a;n<=b;n++)
        {
            if(n%13==0)
              continue;
              sum+=n;
        }

    }
    else if(b<a)
    {
        for(n=b;n<=a;n++)
        {
            if(n%13==0)
            continue;
            sum+=n;

        }

    }
    printf("%d\n",sum);
    return 0;
}
