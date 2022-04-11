#include<stdio.h>
int main()
{
    double n,x=0,avg=0;
    int i = 0,a;
    for(a = 0;a<6;a++)
    {
        scanf("%lf",&n);
        if(n>0)
        {
            i++;
            x +=n;
        }
    }
           avg = x/i;
        printf("%d valores positivos\n",i);
        printf("%.1lf\n",avg);
}
