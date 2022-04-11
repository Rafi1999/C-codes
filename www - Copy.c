#include<stdio.h>
int main()
{
    int n;
        printf("Number of units of gas consumed");
    scanf("%d",&n);

    if(0<=n && n<=150)
        printf("%d",n*4);
    else if(151<=n && n<=300)
        printf("%d",n*6);
    else if(301<=n && n<=499)
       printf("%d",n*8);
    else if(500<=n)
       printf("%d",n*10);
}

