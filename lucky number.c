#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    i = (((n%10) + ((n/10)%10)) == ((n/1000)%10) + ((n/100)%10));
    if(i == 1)
        printf("Lucky Number");
    else
        printf("Not Lucky Number");
}
