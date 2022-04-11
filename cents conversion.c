#include<stdio.h>
#include<stdlib.h>
int main()
{
    const int dollarvalue = 100;
    const int quartervalue = 25;
    const int dimevalue = 10;
    const int nickelvalue = 5;
    int a,b,c,d,e,n,x;
    printf("Enter an amount in cents : ");
    scanf("%d",&n);
    a = n/dollarvalue;
    x = n - (a*dollarvalue);
    b = x/quartervalue;
    x = x - (b*quartervalue);
    c = x/dimevalue;
    x = x - (c*dimevalue);
    d = x/nickelvalue;
    x = x - (d*nickelvalue);
    e = x;
    printf("\nYou can provide this change as follows : ");
    printf("\nDollars  :%d\n",a);
    printf("Quarters :%d\n",b);
    printf("Dimes    :%d\n",c);
    printf("Nickels  :%d\n",d);
    printf("Pennies  :%d\n",e);

}
