#include<stdio.h>
int main()
{
    double SALARY,VALUE,TOTAL;
    char NAME;
    scanf("%s %lf %lf",&NAME,&SALARY,&VALUE);
    TOTAL=SALARY+VALUE*.15;
    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;

}
