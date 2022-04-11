#include<stdio.h>
int main()
{
    int n;
    int i,j;
    scanf("%d",&n);
    for(j=1;j<=3;j++)
    {
        for(i=1;i<=n;i++)
            printf("%d",i);
        for(i=1;i<=n;i++)
            printf("%d",i*i);
        printf("\n");
        n--;
    }
    return 0;
}
