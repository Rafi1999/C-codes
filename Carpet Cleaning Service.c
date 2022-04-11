#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=0,b=0;
    double i,j;
    printf("Hello,Welcome to our carpet cleaning service\n");
    printf("\nHow many small room would you like cleaned : ");
    scanf("%d",&a);
    printf("\nHow many large room would you like cleaned : ");
    scanf("%d",&b);
    printf("\nEstimate for carpet cleaning service\n");
    printf("Number of small room : %d\n",a);
    printf("Number of large room : %d\n",b);
    printf("\n");
    printf("Price per small room : $25.00\n");
    printf("Price per large room : $35.00\n");
    i = (a*25)+(b*35);
    printf("Cost : $%.2lf\n",i);
    j = (i*0.06);
    printf("Tax : $%.2lf\n",j);
    printf("==============================\n");
    printf("Total estimate : $%.2lf\n",i+j);
    printf("This estimate is valid for 30 days\n");




}
