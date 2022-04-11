#include<stdio.h>
int main()
{
    int n,i,sum;
    i = 2 ;
    sum = 0;
    scanf("%d",&n);

    while(i<=n)
    {

        sum = sum+i;
        i+=2;
    }
    printf("%d\n",sum);
    printf("RAFI C193079");
    return 0;
}

