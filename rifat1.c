#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,a,b;
    double distance;
    printf("Input value : ");
    scanf("%d %d %d %d",x1,y1,x2,y2);
    a = (x1-x2);
    b = (y1-y2);
    distance = sqrt((a*a)+(b*b));
    printf("The distance between two points : %lf", distance);
    return 0;
}
