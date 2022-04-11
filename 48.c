#include<stdio.h>
int main()
{
    float a,x,y;
    scanf("%f",&a);
    if ((0<=a) && (a<=400.00))
    {
        x = (a + (a*.15));
        y = (a*.15);
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",y);
        printf("Em percentual: 15 %%\n");
    }
    else if ((400.01<=a) && (a<=800.00))
    {
        x = (a + (a*.12));
        y = (a*.12);
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",y);
        printf("Em percentual: 12 %%\n");
    }
    else if ((800.01<=a) && (a<=1200.00))
    {
        x = (a + (a*.10));
        y = (a*.10);
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",y);
        printf("Em percentual: 10 %%\n");
    }
    else if ((1200.01<=a) && (a<=2000.00))
    {
        x = (a + (a*.07));
        y = (a*.07);
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",y);
        printf("Em percentual: 7 %%\n");
    }
    else if (a>2000.00)
    {
        x = (a + (a*.04));
        y = (a*.04);
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",y);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
