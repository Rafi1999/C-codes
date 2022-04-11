#include<stdio.h>
int main()
{
    int a,n,i;
    scanf("%d",&n);
    i=0;
    for(a=2;a<n;a++)
    {
        if(n%a==0)
        {
            i=1;
        }
    }
    if(i==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
