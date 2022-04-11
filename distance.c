#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x1,x2,y1,y2;
    double d,a;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    a = d;
    printf("%.9lf\n",a);
}
