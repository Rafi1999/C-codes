#include<stdio.h>
int main()
{
    double a,b,m,x;
    while(1)
    {
        scanf("%lf",&a);
        if(a<0 || a>10)
            printf("nota invalida\n");
        else
            break;
    }
    while(1)
    {
        scanf("%lf",&b);
        if(b<0 || b>10)
            printf("nota invalida\n");
        else
            break;
    }
    m = (a+b)/2;
    printf("media = %.2lf\n",m);
    scanf("%lf",x);
    if(x<1 || x>2)
        printf("novo calculo (1-sim 2-nao)");
    return 0;
}
