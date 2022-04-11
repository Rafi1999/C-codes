#include<stdio.h>
int main()
{
    double a,b,c,d,y,x,z;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    x = ((a*2)+(b*3)+(c*4)+(d*1))/10;
    printf("Media: %.1lf\n",x);
    if (x>=7.0)
        printf("Aluno aprovado.\n");
    else if (x<5.0)
        printf("Aluno reprovado.\n");
    else if ((x>=5.0) && (x<=6.9))
    {
    printf("Aluno em exame.\n");
    scanf("%lf",&y);
    printf("Nota do exame: %.1lf\n",y);
    z = (y+x)/2.0;
    if (z>=5.0)
        printf("Aluno aprovado.\n");
    else if(b<=4.9)
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",z);
    }
   return 0;

}
