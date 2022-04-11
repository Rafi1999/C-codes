#include<stdio.h>
int main()
{
    int n,i,sum;
    i = 1;
    sum = 0;
    scanf("%d",&n);

    while(i<=n)
    {

        sum = sum+i;
        i++;
    }
    printf("%d\n",sum);
    printf("RAFI C193079");
    return 0;
}

