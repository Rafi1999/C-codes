#include<stdio.h>
int main()
{
    int time,avg;
    float fuel;
    scanf("%d %d",&time,&avg);
    fuel=((time*avg)/12.0);
    printf("%.3lf\n",fuel);
    return 0;

}

