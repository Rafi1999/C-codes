#include<stdio.h>
void recursion(n)
{
    int i=1;
    if(i>n)
        return;
    else
    {
        printf("I love Recursion\n");
        recursion(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    recursion(n);
}
