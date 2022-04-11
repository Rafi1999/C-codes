#include<stdio.h>
int main()
{
    int a, i = 0;
    double n;
    for(a = 0;a<6;a++)
    {
        scanf("%lf",&n);
        if(n>0)
        {
            i++;
        }
    }
            printf("%d valores positivos\n",i);


}
