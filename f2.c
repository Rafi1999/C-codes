#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int flag(n)
{
    int div=0;
    if(n%2==0)
    {
     div=1;
    }
    else
        div=0;
        return div;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    i = flag(n);
    if(i==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
