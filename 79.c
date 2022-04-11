#include<stdio.h>
int main()
{
    int i,n;
    double a,b,c,sum,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        sum = (a*2)+(b*3)+(c*5);
        avg = (sum/10);
        printf("%.1lf\n",avg);
    }

}
