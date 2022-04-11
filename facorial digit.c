#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count=0;
    double f=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        f=f*i;
    while(f!=0)
    {
        f/=10;
        count++;
    }
    printf("Number of digits of %d! is %d\n",n,count);
}
