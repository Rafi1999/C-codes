#include<stdio.h>
#include<stdlib.h>
double getdouble()
{
    return 9/2.0;
}
int main()
{
    double divide = getdouble();
    printf("DIVIDE = %.2lf\n",divide);
}
