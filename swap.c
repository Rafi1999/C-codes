#include<stdio.h>
void swap(a,b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n",a,b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}
