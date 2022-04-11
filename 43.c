#include<stdio.h>
int main()
{
    float a,b,c,X,P;
    scanf("%f %f %f",&a,&b,&c);
    if ((a <(float)(b+c)) && (b <(float)(a+c)) && (c <(float)(a+b)))
    {
        P = a+b+c;
        printf("Perimetro = %.1f\n",P);
    }
    else
    {
       X = ((a+b)*c)/2;
       printf("Area = %.1f\n",X);
    }
    return 0;
}
