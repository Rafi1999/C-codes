#include<stdio.h>
int main()
{
    int n, count = 1;
    float x,avg, sum =0;
    printf("How many numbers?");
    scanf("%d",&n);
    while (count<=n){
        printf("x= ");
        scanf("%f",&x);
        sum += x;
        ++count;
    }
    avg = sum/n;
    printf("\nThe average is %f\n",avg);
}
