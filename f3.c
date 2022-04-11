#include<stdio.h>
#include<math.h>
void combination(n,r)
{
    int ncr;
    ncr = fact(n)/(fact(r)*fact(n-r));
    printf("%d",ncr);
}
int main()
{
    int n,r;
    scanf("%d %d",n,r);
    combination(n,r);
    return 0;
}
