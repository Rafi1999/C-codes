#include <stdio.h>
int main()
{

    int a,b, i=0,j=0, sum= 0,odd =0,even=0,sum1=0,even1=0,odd1=0;
    scanf("%ld\n%ld",&a,&b);
    if(b>a)
    {for(i=a; i <= b; i++)
        sum = sum + i;
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
            even += i;
        else
            odd +=i;
    }
    }
    else
    {
    for(j=a;j>=b;j--)
        sum = sum + j;
    for(j=a;j>=b;j--)
    {
        if(j%2==0)
            even += j;
        else
            odd +=j;
    }
    }

    printf("%ld\n",sum);
    printf("%ld\n",even);
    printf("%ld\n",odd);

}
