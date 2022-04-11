#include<stdio.h>
void shape(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    shape(n);
}
