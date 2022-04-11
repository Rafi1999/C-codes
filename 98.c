#include<stdio.h>
int main()
{
    double i,j=1.0;
    for(i=0.0;i<=2.0;i+=0.2)
    {
        if(fabs(i-0)<0.1 || fabs(i-1)<0.1 || fabs(i-1)<0.1)
        {
            printf("%.0lf %.0lf\n",i,j+i);
            printf("%.0lf %.0lf\n",i,j+i+1);
            printf("%.0lf %.0lf\n",i,j+i+2);
        }
        else
        {
            printf("%.1lf %.1lf\n",i,j+i);
            printf("%.1lf %.1lf\n",i,j+i+1);
            printf("%.1lf %.1lf\n",i,j+i+2);
        }
    }
    return 0;
}
