#include<stdio.h>
int main()
{
    int n;
    int i;
    i = 1;
    scanf("%d",&n);

    while(i<n)
    {
        if (i%7==0 || i%11==0)
        printf("%d\n",i);
        i++;
    }
    printf("RAFI C193079");
    return 0;
}
