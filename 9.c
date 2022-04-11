#include<stdio.h>
int main()
{
    int a,b;
    double x,y;
    scanf("%d %d %lf",&a,&b,&x);
    y = (b * x);
    scanf("%d %d %lf",&a,&b,&x);
    y += (b * x);
    printf("VALOR A PAGOR = R$ %.2lf\n",y);
    return 0;
}
