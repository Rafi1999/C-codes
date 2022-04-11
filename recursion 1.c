#include<stdio.h>
void recursion(m,n)
{
    if(m==n)
        printf("%d",n);
        else
        {
            printf("%d",n);
    printf(" ");
    recursion(m,n-1);
        }

}
int main()
{
    int m=1,n;
    scanf("%d",&n);
    recursion(m,n);
}
