#include<stdio.h>
#include<stdlib.h>
unsigned long long binary_function(decimal)
{
    unsigned long long binary=0,r=1,t=1;
    while(decimal!=0)
    {
        r = decimal%2;
        decimal = decimal/2;
        binary = binary + r*t;
        t = t*10;
    }
    return binary;

}
int main()
{
    unsigned long long decimal;
    scanf("%llu",&decimal);
    printf("%llu\n",binary_function(decimal));
}
