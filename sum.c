#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    int i,sum=0,x,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%c",&a[i]);
    for(i=0;i<n;i++)
    {
        x = a[i]-'0';
        sum = sum+x;
    }
    printf("%d\n",sum);
}
