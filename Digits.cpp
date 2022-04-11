#include <stdio.h>
#include<string.h>
int main()
{
    int N,i,j,n,r=0,s;
    char a[100000];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
    printf("Enter a number to reverse\n");
    scanf("%d", &n);
    while (n != 0)
    {
        r = r * 10;
        r = r + n%10;
        n = n/10;
        a[i]=r;
        s = strlen(a);
        for(j=0;j<s;j++)
            printf("%c ",a[j]);

    }
    }


    return 0;
}
