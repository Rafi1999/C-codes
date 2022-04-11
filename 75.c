#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    for(a=1;a<=10000;a++)
    {
        if(a%n==2)
        {
            printf("%d\n",a);
        }
    }
    return 0;
}
