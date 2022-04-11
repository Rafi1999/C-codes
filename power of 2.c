#include<stdio.h>
int main()
{
    long long int i,t,flag=0;
    scanf("%lld",&i);
    t= i;
    while(t!=1)
    {
        if(t%2!=0)
        {
            flag=1;
            break;
        }
        t = t/2;
    }
    if(flag==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
