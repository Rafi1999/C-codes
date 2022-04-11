#include<stdio.h>
int main()
{
    double n1,sum=0,avg;
    int pos=0,n2;
    while(1)
    {
        scanf("%lf",&n1);
        if(n1>=0 && n1<=10.0)
    {
        sum=sum+n1;
        pos++;
        if(pos==1) continue;
        avg=sum/2.0;
        printf("media = %.2lf\n",avg);
    }
    else
    {
        printf("nota invalida\n");
        continue;
    }
    sum=0;
    pos=0;
    while(1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&n2);
        if(n2==1 || n2==2) break;
    }
    if(n2==2) break;
    }
}
