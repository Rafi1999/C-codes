#include<stdio.h>
int main()
{
    int n,i,sum,p;
    i = 1;
    sum = 0;
    p = 0;
    scanf("%d",&n);

    while(p<n)
    {

        sum = sum+i;
        i+=3;
        p++;
    }
    printf("%d\n",sum);
    printf("RAFI C193079");
    return 0;
}

