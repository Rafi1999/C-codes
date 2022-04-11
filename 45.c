#include<stdio.h>
int main()
{
    double A,B,C,D;
    scanf("%lf %lf %lf",&A,&B,&C);
    if (A<B)
    {
        D=A;
        A=B;
        B=D;
    }
    if (B<C)
    {
        D=B;
        B=C;
        C=D;
    }
    if (A<B)
    {
        D=A;
        A=B;
        B=D;
    }
    if (A >= B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((A*A)==(B*B+C*C))
             {
                 printf("TRIANGULO RETANGULO\n");
             }
             else if (A*A > B*B+C*C)
                {
                    printf("TRIANGULO OBTUSANGULO\n");
                }
                else if (A*A < B*B + C*C)
                {
                    printf("TRIANGULO ACUTANGULO\n");
                }

                if (A == B && B ==C)
                {
                    printf("TRIANGULO EQUILATERO\n");
                }

                else if (A ==B || B==C)
                {
                    printf("TRIANGULO ISOSCELES\n");
                }
                return 0;

}
